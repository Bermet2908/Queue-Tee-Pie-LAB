#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/PygmyMarmoset.hpp"

TEST_CASE("PygmyMarmoset has correct description and cuteness") {
    PygmyMarmoset m;

    REQUIRE(m.get_description() == std::string("A tiny pygmy marmoset"));
    REQUIRE(m.get_cuteness_rating() == 10);
}
