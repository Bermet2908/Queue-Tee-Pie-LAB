#include "QueueTees.hpp"

QueueTees::QueueTees()
    : front_index(0), rear_index(0), count(0) {
    for (int i = 0; i < MAX_SIZE; i++) {
        items[i] = nullptr;
    }
}

bool QueueTees::is_full() const {
    return count == MAX_SIZE;
}

bool QueueTees::is_empty() const {
    return count == 0;
}

int QueueTees::size() const {
    return count;
}

void QueueTees::enqueue(Cutie& cutie) {
    if (is_full()) {
        std::cout << "Queue is full. Cannot enqueue another cutie.\n";
        return;
    }

    items[rear_index] = &cutie;
    rear_index = (rear_index + 1) % MAX_SIZE;
    count++;
}

Cutie* QueueTees::dequeue() {
    if (is_empty()) {
        std::cout << "Queue is empty. Nothing to dequeue.\n";
        return nullptr;
    }

    Cutie* result = items[front_index];
    items[front_index] = nullptr;

    front_index = (front_index + 1) % MAX_SIZE;
    count--;

    return result;
}
