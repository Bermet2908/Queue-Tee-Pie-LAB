#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/puppy.hpp"

TEST_CASE("puppy has correct description and cuteness") {
    Puppy puppy;

    REQUIRE(puppy.get_description() == std::string("A very cute puppy"));
    REQUIRE(puppy.get_cuteness_rating() == 10);
}
