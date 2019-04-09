#pragma once
#include "Base.h"
#include <iostream>

/*
*   @class
*   @brief Klasa reprezentująca plik, dziedziczy po klasie podstawowej Base.
*/
class File final: public Base {
    public:

    /*
    *   @fn File
    *   @brief Konstruktor tworzący nowy plik o podanej nazwie.
    */
    File(std::string name);
    
    /*
    *   @fn print
    *   @brief Metoda wypisująca nazwę pliku.
    *   @param space Określa ilość spacji po której funkcja ma wypisać nazwę.
    */
    void print(int space) const;
};
