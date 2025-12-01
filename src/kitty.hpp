#pragma once
#include <string>
#include "cutie.hpp"

class Kitty : public Cutie {
public:
    Kitty() : Cutie("A fluffy little kitty", 9) {}

    std::string get_description() override {
        return "A fluffy little kitty";
    }

    int get_cuteness_rating() override {
        return 9;
    }
};
