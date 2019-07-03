#include "Wielofunkcyjne.h"

Wielofunkcyjne::Wielofunkcyjne(Rozdzielczosc r_D, Rozdzielczosc r_S) : Drukarka(r_D), Skaner(r_S), Ksero(r_D, r_S) {}

std::string Wielofunkcyjne::rodzaj() const {
    return "Wielofunkcyjne";
}