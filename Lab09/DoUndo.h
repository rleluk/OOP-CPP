#pragma once
#include "DoUndoAction.h"
#include "KeepInt.h"

/*
*   @class DoUndo
*   @brief Klasa pozwalajaca na odwolanie wczesniej wykonanej operacji w razie wystapienia bledu.
*/
class DoUndo {
    public:
    
    /*
    *   @fn DoUndo
    *   @brief Konstruktor przyjmujacy wskaznik do obiektu reprezentujacego dana akcje.
    */
    DoUndo(DoUndoAction *ptr);

    /*
    *   @fn ~DoUndo
    *   @brief Destruktor wykonujacy odpowiednie operacje w zaleznosci od ich stanu powodzenia.
    */
    ~DoUndo();
    
    /*
    *   @fn allok
    *   @brief Metoda statyczna, ktora potwierdza poprawnosc wykonanych wczesniej operacji.
    */
    static void allok();

    private:
    DoUndoAction *_ptr = nullptr;
    static bool _isOK;
};