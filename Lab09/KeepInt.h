#pragma once
#include "DoUndoAction.h"

/*
*   @class KeepInt
*   @brief Klasa przechowywujaca wartosc poczatkowa znajdujaca sie na koncie oraz referencje do "stanu konta".
*          Dziedziczy ona interfejs po klasie abstrakcyjnej DoUndoAction, co pozwala na wykorzystanie polimorfizmu.
*/
class KeepInt : public DoUndoAction {
    public:

    /*
    *   @fn KeepInt
    *   @brief Konstruktor zapisujacy wartosc poczatkowa oraz referencje do danego inta (reprezentujacego stan konta).
    */
    KeepInt(int &value);

    /*
    *   @fn undoFail
    *   @brief Metoda wywolywana jezeli operacja zostala zakonczona niepowodzeniem. 
    *          Pozwala na cofniecie wykonanych operacji.
    */
    void undoFail() override;

    void dodo() override {}
    void undoOk() override {}

    private:

    //referencja do stanu konta
    int &_value;

    // wartosc poczatkowa
    int prevValue;
};