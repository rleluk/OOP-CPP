#include "Skaner.h"

Skaner::Skaner(Rozdzielczosc r) : _rozdzielczosc(r) {}

std::string Skaner::rodzaj() const {
    return "Skaner";
}

std::string Skaner::rozdzielczosc() const {
    return std::to_string(_rozdzielczosc.getX()) + "x" + std::to_string(_rozdzielczosc.getY());
} 