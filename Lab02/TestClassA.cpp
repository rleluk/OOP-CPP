#include "TestClassA.h"
#include <iostream>

TestClassA::~TestClassA() {
    std::cout << ".. Usuwam TestClassA " << _name << std::endl;
}

TestClassA::TestClassA(std::string name) : _name(name) {
    std::cout << ".. Konstruuje TestClassA " << _name << std::endl;
}

std::string TestClassA::name() const {
    return _name;
}