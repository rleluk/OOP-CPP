#include "FloatWrapper.h"

FloatWrapper::FloatWrapper(const double value) : _value(value) {}

void FloatWrapper::print(std::ostream &output) {
    output << _value;
}

Wrapper *FloatWrapper::copy() const {
    return new FloatWrapper(_value);
}