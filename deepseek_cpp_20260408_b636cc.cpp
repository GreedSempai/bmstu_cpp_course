optional(optional&& other) noexcept : is_initialized_(other.is_initialized_) {
    if (is_initialized_) {
        new (&data_[0]) T(std::move(other.value()));
        other.reset();
    }
}

optional& operator=(optional&& other) noexcept {
    if (this != &other) {
        reset();  // Проще сначала очистить текущий
        
        if (other.is_initialized_) {
            new (&data_[0]) T(std::move(other.value()));
            is_initialized_ = true;
            other.reset();
        }
    }
    return *this;
}
