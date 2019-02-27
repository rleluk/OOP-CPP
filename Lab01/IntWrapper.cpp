#include "IntWrapper.h"

IntWrapper::IntWrapper(const int value) : _value(value) {}

void IntWrapper::print(std::ostream &output) {
    output << _value;
}

Wrapper *IntWrapper::copy() const {
    return new IntWrapper(_value);
}