#pragma once
#include <cstdint>
#include <exception>
#include <type_traits>
#include <utility>

namespace bmstu
{
struct nullopt_t
{
    constexpr explicit nullopt_t(int) {}
};
inline constexpr nullopt_t nullopt{0};

class bad_optional_access : public std::exception
{
public:
    const char* what() const noexcept override { return "Bad optional access"; }
};

template <typename T>
class optional
{
public:
    // Default constructor
    optional() noexcept : is_initialized_(false) {}

    // Nullopt constructor
    optional(nullopt_t) noexcept : is_initialized_(false) {}

    // Copy value constructor
    optional(const T& value) : is_initialized_(true) {
        new (&data_[0]) T(value);
    }

    // Move value constructor
    optional(T&& value) : is_initialized_(true) {
        new (&data_[0]) T(std::move(value));
    }

    // Copy constructor
    optional(const optional& other) : is_initialized_(other.is_initialized_) {
        if (is_initialized_) {
            new (&data_[0]) T(other.value());
        }
    }

    // Move constructor
    optional(optional&& other) noexcept : is_initialized_(other.is_initialized_) {
        if (is_initialized_) {
            new (&data_[0]) T(std::move(other.value()));
            other.reset();
        }
    }

    // Destructor
    ~optional() {
        reset();
    }

    // Assignment from value (copy)
    optional& operator=(const T& value) {
        if (is_initialized_) {
            value() = value;
        } else {
            new (&data_[0]) T(value);
            is_initialized_ = true;
        }
        return *this;
    }

    // Assignment from value (move)
    optional& operator=(T&& value) {
        if (is_initialized_) {
            value() = std::move(value);
        } else {
            new (&data_[0]) T(std::move(value));
            is_initialized_ = true;
        }
        return *this;
    }

    // Copy assignment
    optional& operator=(const optional& other) {
        if (this != &other) {
            if (is_initialized_ && other.is_initialized_) {
                value() = other.value();
            } else if (is_initialized_) {
                reset();
            } else if (other.is_initialized_) {
                new (&data_[0]) T(other.value());
                is_initialized_ = true;
            }
        }
        return *this;
    }

    // Move assignment
    optional& operator=(optional&& other) noexcept {
        if (this != &other) {
            if (is_initialized_ && other.is_initialized_) {
                value() = std::move(other.value());
                other.reset();
            } else if (is_initialized_) {
                reset();
            } else if (other.is_initialized_) {
                new (&data_[0]) T(std::move(other.value()));
                is_initialized_ = true;
                other.reset();
            }
        }
        return *this;
    }

    // Assignment from nullopt
    optional& operator=(nullopt_t) noexcept {
        reset();
        return *this;
    }

    // Template assignment for convertible types (e.g., const char* to string)
    template<typename U, typename = std::enable_if_t<std::is_constructible_v<T, U>>>
    optional& operator=(U&& value) {
        if (is_initialized_) {
            value() = std::forward<U>(value);
        } else {
            new (&data_[0]) T(std::forward<U>(value));
            is_initialized_ = true;
        }
        return *this;
    }

    // Observers
    bool has_value() const noexcept {
        return is_initialized_;
    }

    explicit operator bool() const noexcept {
        return has_value();
    }

    T& value() & {
        if (!is_initialized_) {
            throw bad_optional_access();
        }
        return *reinterpret_cast<T*>(&data_[0]);
    }

    const T& value() const& {
        if (!is_initialized_) {
            throw bad_optional_access();
        }
        return *reinterpret_cast<const T*>(&data_[0]);
    }

    T&& value() && {
        if (!is_initialized_) {
            throw bad_optional_access();
        }
        return std::move(*reinterpret_cast<T*>(&data_[0]));
    }

    // Dereference operators
    T& operator*() & {
        return value();
    }

    const T& operator*() const& {
        return value();
    }

    T&& operator*() && {
        return std::move(value());
    }

    T* operator->() {
        return &value();
    }

    const T* operator->() const {
        return &value();
    }

    // Modifiers
    void reset() noexcept {
        if (is_initialized_) {
            value().~T();
            is_initialized_ = false;
        }
    }

    template <typename... Args>
    void emplace(Args&&... args) {
        reset();
        new (&data_[0]) T(std::forward<Args>(args)...);
        is_initialized_ = true;
    }

private:
    alignas(T) uint8_t data_[sizeof(T)];
    bool is_initialized_ = false;
};

// Deduction guide
template<typename T>
optional(T) -> optional<T>;

} // namespace bmstu
