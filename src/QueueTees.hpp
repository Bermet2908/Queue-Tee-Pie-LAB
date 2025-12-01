#pragma once
#include <iostream>
#include "cutie.hpp"

class QueueTees {
private:
    static const int MAX_SIZE = 10;
    Cutie* items[MAX_SIZE];

    int front_index;
    int rear_index;
    int count;

    bool is_full() const;
    bool is_empty() const;

public:
    QueueTees();

    void enqueue(Cutie& cutie);
    Cutie* dequeue();
    int size() const;
};
