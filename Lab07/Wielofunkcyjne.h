#pragma once
#include "Ksero.h"

/*
*   @class Wielofunkcyjne
*   @brief Klasa reprezentujaca urzadzenia wielofunkcyjne, posiada te same wlasciwosci co ksero.
*/
class Wielofunkcyjne : public Ksero {
    public:
    Wielofunkcyjne(Rozdzielczosc r_D, Rozdzielczosc r_S);
    
    /*
    *   @fn rodzaj
    *   @brief Zwraca rodzaj urzadzenia (Wielofunkcyjne).
    */
    std::string rodzaj() const;
};