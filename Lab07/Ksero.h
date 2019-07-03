#pragma once
#include "Drukarka.h"
#include "Skaner.h"
/*
*   @class Ksero 
*   @brief Klasa reprezentujaca ksero, ktora jest polaczeniem drukarki i skanera. Posiada wszystkie cechy tych urzadzen.
*/
class Ksero : virtual public Drukarka, virtual public Skaner {
    public:
    Ksero(Rozdzielczosc r_D, Rozdzielczosc r_S);
    /*
    *   @fn rodzaj
    *   @brief Zwraca rodzaj urzadzenia (Ksero).
    */
    std::string rodzaj() const;
};