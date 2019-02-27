#pragma once
#include <iostream>
#include "Wrapper.h"

class IntWrapper : public Wrapper {
    public:
    ~IntWrapper() = default;
    IntWrapper(const int value);
    void print(std::ostream &output);
    Wrapper *copy() const;

    private:
    int _value;
};