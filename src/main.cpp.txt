#include <iostream>
#include "AddOperation.hpp"

int main() {
    Operation* op = new AddOperation();
    std::cout << "Simple Calculator Result: 5 + 3 = " << op->calculate(5, 3) << std::endl;
    delete op;
    return 0;
}