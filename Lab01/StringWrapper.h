#pragma once
#include <string>
#include <iostream>
#include "Wrapper.h"

class StringWrapper : public Wrapper {
    public:
    ~StringWrapper() = default;
    StringWrapper(const std::string value);
    void print(std::ostream &output);
    Wrapper *copy() const;

    private:
    std::string _value;
};