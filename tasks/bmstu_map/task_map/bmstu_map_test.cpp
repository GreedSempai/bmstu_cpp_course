#include <map>
#include <gtest/gtest.h>
#include "bmstu_map.h"

TEST(MapTest, init) {
    bmstu::map<int> map;
    map.insert(10);
    map.insert(9);
    map.insert(8);
    map.insert(7);
    map.insert(6);
    map.remove(9);
    map.print();
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}