#pragma once
#include "Urzadzenie.h"
#include "Rozdzielczosc.h"

/*
*   @class Skaner
*   @brief Klasa reprezentujaca skaner, posiada zapisana rozdzielczosc skanowania.
*/
class Skaner : virtual public Urzadzenie {
    public:
    Skaner(Rozdzielczosc r);

    /*
    *   @fn rodzaj
    *   @brief Zwraca rodzaj urzadzenia (Skaner).
    */
    std::string rodzaj() const;
    
    /*
    *   @fn rozdzielczosc
    *   @brief Zwraca rozdzielczosc skanowania.
    */
    std::string rozdzielczosc() const;

    private:
    Rozdzielczosc _rozdzielczosc;
};