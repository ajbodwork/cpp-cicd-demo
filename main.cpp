#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

int add(int a, int b) {
    return a + b;       
}

TEST_CASE("Verify that the add function works correctly", "[math]") {
    REQUIRE(add(2, 3) == 5);
    REQUIRE(add(-1, 1) == 0);
}