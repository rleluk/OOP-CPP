#pragma once

/*
*   @class DoUndoAction
*   @brief Abstrakcyjna klasa bazowa posiadajaca trzy metody skladowe wykonywane w odpowiednich sytuacjach. 
*/
class DoUndoAction {
    public:

    /*
    *   @fn dodo
    *   @brief Metoda wywolywana na samym poczatku operacji.
    */
    virtual void dodo() = 0;

    /*
    *   @fn undoOk
    *   @brief Metoda wywolywana jezeli operacje zostaly wykonane poprawnie.
    */
    virtual void undoOk() = 0;

    /*
    *   @fn undoFail
    *   @brief Metoda wywolywana jezeli wystapil blad w trakcie wykonywania operacji.
    */
    virtual void undoFail() = 0;

    virtual ~DoUndoAction() = default;
};