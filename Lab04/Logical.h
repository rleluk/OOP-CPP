#pragma once
#include "TwoArg.h"
#include "OneArg.h"

/*
*   @class Logical
*   @brief Klasa umożliwiająca wykonywanie dwuargumentowych lub jednoargumentowych operacji logicznnych
*/
class Logical {
    public:

    /*
    *   @fn eval
    *   @brief Metoda statyczna, która przyjmuje referencję do klasy reprezentującej daną operację dwuargumentową wraz z dwoma argumentami
    *   @return Wynik operacji logicznej
    */
    static bool eval(const TwoArg &op, bool first, bool second);
    
    /*
    *   @fn eval
    *   @brief Metoda statyczna, która przyjmuje referencję do klasy reprezentującej daną operację jednoargumentową wraz z argumentem
    *   @return Wynik operacji logicznej
    */ 
    static bool eval(const OneArg &op, bool first);
};


