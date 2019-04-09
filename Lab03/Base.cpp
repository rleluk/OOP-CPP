#include "Base.h"
Base::Base(std::string name): _name(name) {}

std::string Base::getName() const{
    return _name;
}

