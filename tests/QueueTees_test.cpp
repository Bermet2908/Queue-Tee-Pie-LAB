#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/QueueTees.hpp"
#include "../src/puppy.hpp"
#include "../src/kitty.hpp"
#include "../src/PygmyMarmoset.hpp"

TEST_CASE("new QueueTees starts empty") {
    QueueTees queue;
    REQUIRE(queue.size() == 0);
}

TEST_CASE("enqueue increases size in QueueTees") {
    QueueTees queue;
    Puppy puppy;

    queue.enqueue(puppy);
    REQUIRE(queue.size() == 1);

    Kitty kitty;
    queue.enqueue(kitty);
    REQUIRE(queue.size() == 2);
}

TEST_CASE("QueueTees dequeues in FIFO order") {
    QueueTees queue;
    Puppy puppy;
    Kitty kitty;
    PygmyMarmoset marmoset;

    queue.enqueue(puppy);
    queue.enqueue(kitty);
    queue.enqueue(marmoset);

    Cutie* first = queue.dequeue();
    REQUIRE(first != nullptr);
    REQUIRE(first->get_description() == std::string("A very cute puppy"));

    Cutie* second = queue.dequeue();
    REQUIRE(second != nullptr);
    REQUIRE(second->get_description() == std::string("A fluffy little kitty"));

    Cutie* third = queue.dequeue();
    REQUIRE(third != nullptr);
    REQUIRE(third->get_description() == std::string("A tiny pygmy marmoset"));

    REQUIRE(queue.size() == 0);
}

