#pragma once
#include <string>
#include "cutie.hpp"

class Puppy : public Cutie {
public:
    Puppy() : Cutie("A very cute puppy", 10) {}

    std::string get_description() override {
        return "A very cute puppy";
    }

    int get_cuteness_rating() override {
        return 10;
    }
};


