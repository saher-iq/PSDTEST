#pragma once
#include "Operation.hpp"

class AddOperation : public Operation {
public:
    double calculate(double a, double b) override {
        return a + b;
    }
};