#pragma once
class Operation {
public:
    virtual double calculate(double a, double b) = 0;
    virtual ~Operation() = default;
};