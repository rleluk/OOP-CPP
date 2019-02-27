#pragma once
#include <iostream>
#include "Wrapper.h"

class FloatWrapper : public Wrapper {
    public:
    ~FloatWrapper() = default;
    FloatWrapper(const double value);
    void print(std::ostream &output);
    Wrapper *copy() const;

    private:
    double _value;
};