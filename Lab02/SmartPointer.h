#pragma once
#include "TestClassA.h"

/*
*   @class SmartPointer
*   @brief klasa reprezentująca sprytny wskaźnik
*/
class SmartPointer {
    public:
    /*
    *   @fn ~SmartPointer
    *   @brief  destruktor dealokujący pamięć
    */
    ~SmartPointer();

    // usuwany jest domyślny konstruktor kopiujący
    SmartPointer(const SmartPointer&) = delete;

    /*
    *   @fn SmartPointer
    *   @brief konstruktor przyjmujący jako argument inny sprytny wskaznik
    */
    SmartPointer(SmartPointer &object);

    /*
    *   @fn SmartPointer
    *   @brief konstruktor 
    */
    SmartPointer(TestClassA *pointer);

    /*
    *   @fn operator=
    *   @brief pozwala na przypisanie sprytnych wskaźników
    */
    void operator=(SmartPointer &object);

    /*
    *   @fn operator*
    *   @brief zwraca referencję do obiektu przechowywanego pod adresem na który wskazuje wskaźnik
    */
    TestClassA &operator*();

    /*
    *   @fn operator->
    *   @brief zwraca wskaźnik do obiektu TestClassA
    */
    TestClassA *operator->();

    private:
    TestClassA *_pointer;

    // licznik wspólny dla wszystkich sprytnych wskaźnikow, które wskazują na ten sam obiekt
    int *_count;
};

