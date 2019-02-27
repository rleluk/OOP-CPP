#include "StringWrapper.h"

StringWrapper::StringWrapper(const std::string value) : _value(value) {}

void StringWrapper::print(std::ostream &output) {
    output << _value;
}

Wrapper *StringWrapper::copy() const {
    return new StringWrapper(_value);
}