#include "Ksero.h"
Ksero::Ksero(Rozdzielczosc r_D, Rozdzielczosc r_S) : Drukarka(r_D), Skaner(r_S) {}

std::string Ksero::rodzaj() const {
    return "Ksero";
}