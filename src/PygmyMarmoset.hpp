#pragma once
#include <string>
#include "cutie.hpp"

class PygmyMarmoset : public Cutie {
public:
    PygmyMarmoset() : Cutie("A tiny pygmy marmoset", 10) {}

    std::string get_description() override {
        return "A tiny pygmy marmoset";
    }

    int get_cuteness_rating() override {
        return 10;
    }
};
