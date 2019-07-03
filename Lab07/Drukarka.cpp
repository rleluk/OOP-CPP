#include "Drukarka.h"
#include <iostream>
#include <string>

Drukarka::Drukarka(Rozdzielczosc r) : _rozdzielczosc(r) {}

std::string Drukarka::rodzaj() const {
    return "Drukarka";
}

std::string Drukarka::rozdzielczosc() const {
    return std::to_string(_rozdzielczosc.getX()) + "x" + std::to_string(_rozdzielczosc.getY());
} 