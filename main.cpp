#include <iostream>
#include "src/QueueTees.hpp"
#include "src/puppy.hpp"
#include "src/kitty.hpp"
#include "src/PygmyMarmoset.hpp"

int main() {
    Puppy puppy;
    Kitty kitty;
    PygmyMarmoset marmoset;

    QueueTees queue;

    std::cout << queue.size() << std::endl;

    queue.enqueue(puppy);
    queue.enqueue(kitty);
    queue.enqueue(marmoset);

    std::cout << queue.size() << std::endl;

    Cutie* first = queue.dequeue();
    if (first != nullptr) {
        std::cout << first->get_description() << std::endl;
    }

    Cutie* second = queue.dequeue();
    if (second != nullptr) {
        std::cout << second->get_description() << std::endl;
    }

    Cutie* third = queue.dequeue();
    if (third != nullptr) {
        std::cout << third->get_description() << std::endl;
    }

    return 0;
}
