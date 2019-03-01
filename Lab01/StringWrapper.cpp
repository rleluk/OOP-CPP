#include "StringWrapper.h"

StringWrapper::StringWrapper(std::string value) : _value(value) {}

void StringWrapper::print(std::ostream &output) {
    output << _value;
}

Wrapper *StringWrapper::copy() const {
    return new StringWrapper(_value);
}