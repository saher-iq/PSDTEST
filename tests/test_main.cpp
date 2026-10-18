#include <cassert>
#include <iostream>
#include "AddOperation.hpp"

int main() {
    AddOperation add;
    // اختبار بسيط يتأكد أن 2 + 3 يساوي 5
    assert(add.calculate(2, 3) == 5);
    std::cout << "Unit Tests Passed Successfully!\n";
    return 0;
}