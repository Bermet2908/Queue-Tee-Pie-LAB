#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/kitty.hpp"

TEST_CASE("kitty has correct description and cuteness") {
    Kitty kitty;

    REQUIRE(kitty.get_description() == std::string("A fluffy little kitty"));
    REQUIRE(kitty.get_cuteness_rating() == 9);
}
