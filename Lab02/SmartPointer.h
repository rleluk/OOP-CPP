#pragma once
#include "TestClassA.h"

/*
*   @class SmartPointer
*   @brief Klasa reprezentująca sprytny wskaźnik.
*/
class SmartPointer {
    public:
    /*
    *   @fn ~SmartPointer
    *   @brief Destruktor dekrementujący licznik referencji do danego obiektu, który jest przechowywany przez sprytny wskaźnik.
    *           Jeżeli licznik po dekrementacji wskazuje na to, że nie ma już więcej sprytnych wskaźników, które wskazują na dany obiekt, to dealokowana jest 
    *           pamięć przeznaczona na obiekt oraz licznik.
    */
    ~SmartPointer();

    // Usuwany jest domyślny konstruktor kopiujący.
    SmartPointer(const SmartPointer&) = delete;

    /*
    *   @fn SmartPointer
    *   @brief Konstruktor kopiujący sprytnego wskaźnika. Kopiuje wskaźnik do obiektu oraz licznik referencji, dodatkowo inkrementując ten licznik.
    */
    SmartPointer(SmartPointer &object);

    /*
    *   @fn SmartPointer
    *   @brief Konstruktor przyjmujący obiekt, na który wskazywać ma sprytny wskaźnik. Dodatkowo alokuje pamięć dla licznika referencji i ustawia owy licznik na 1.
    */
    SmartPointer(TestClassA *pointer);

    /*
    *   @fn operator=
    *   @brief Przeciążony operator, pozwalający na przypisanie do istniejącego sprytnego wskaźnika inny sprytny wskaźnik. Odpowiednio dekrementowany jest licznik referencji dla obiektu 
    *           przechowywanego do tej pory w danym sprytnym wskaźniku (jeżeli wartość licznika jest mniejsza od 1, to dealokowana jest pamięć przeznaczona na owy obiekt i jego licznik), 
    *           po czym skopiowany zostaje wskaźnik do obiektu i zwiększony zostaje licznik referencji tego obiektu.
    */
    void operator=(SmartPointer &object);

    /*
    *   @fn operator*
    *   @brief Metoda zwracająca referencję do obiektu, który jest przechowywany w sprytnym wskaźniku.
    */
    TestClassA &operator*();

    /*
    *   @fn operator->
    *   @brief Metoda zwracająca wskaźnik do obiektu, który jest przechowywany w sprytnym wskaźniku.
    */
    TestClassA *operator->();

    private:
    TestClassA *_pointer;

    /*
    *   @param _count 
    *   @brief Licznik referencji danego obiektu.
    */
    int *_count;
};

