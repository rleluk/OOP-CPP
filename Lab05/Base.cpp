#include "Base.h"
Base::Base(std::string name): _name(name) {}

std::string Base::getName() const{
    return _name;
}

std::ostream& operator<<(std::ostream& output, const Base &source) {
    source.print(0);
    return output;
}