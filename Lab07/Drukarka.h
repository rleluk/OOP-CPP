#pragma once
#include "Papierozerne.h"
#include "Rozdzielczosc.h"

/*
*   @class Drukarka 
*   @brief Klasa reprezentujaca drukarke, posiada zapisana rozdzielczosc druku.
*/
class Drukarka : virtual public Papierozerne {
    public:
    Drukarka(Rozdzielczosc r);

    /*
    *   @fn rodzaj
    *   @brief Zwraca rodzaj urzadzenia (Drukarka).
    */
    std::string rodzaj() const;

    /*
    *   @fn rozdzielczosc
    *   @brief Zwraca rozdzielczosc druku.
    */
    std::string rozdzielczosc() const;

    private:
    Rozdzielczosc _rozdzielczosc;
};