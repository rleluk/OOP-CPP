#pragma once
#include "Base.h"
#define MAX_SIZE 10

/*
*   @class Dir
*   @brief Klasa reprezentująca katalogi, dziedziczy po klasie bazowej Base.
*/
class Dir final : public Base {
    public:

    /*
    *   @fn ~Dir
    *   @brief Destruktor dealokujący pamięć i wypisujący przy tym odpowiednie komentarze.
    */
    ~Dir();

    /*
    *   @fn Dir
    *   @brief Konstruktor tworzący nowy katalog o podanej nazwie.
    */
    Dir(std::string name);

    /*
    *   @fn operator+=
    *   @brief Przeładowany operator służący do dodawania nowych plików/katalogów do naszego katalogu.
    */
    void operator+=(Base *object);

    /*
    *   @fn get
    *   @brief Metoda zwracająca zawartość katalogu, o podanej nazwie, znajdującego się w naszym katalogu.
    *           Przeszukiwanie katalogu odbywa się rekurencyjnie ("wchodzimy" do kolejnych podkatalogów).
    */
    Base* get(std::string name);

    /*
    *   @fn print
    *   @brief Metoda zwracająca nazwę katalogu oraz jego zawartość.
    *   @param space Ilość spacji, po której wyświetlana jest nazwa.
    */
    void print(int space) const;

    /*
    *   @fn add
    *   @brief Metoda służąca do dodawania plików/podkatalogów do naszego katalogu. 
    */
    void add(Base *object);

    /*
    *   @fn findDir
    *   @brief Metoda szukająca katalog o zadanej nazwie i zwracająca do niego wskaźnik (o ile istnieje).
    */
    Dir *findDir(std::string name);

    private:
    
    /*
    *   @param _array
    *   @brief Tablica z zawartością katalogu.
    */
    Base *_array[MAX_SIZE];

    /*
    *   @param _count
    *   @brief Aktualna ilość plików/podkatalogów znajdujących się w naszym katalogu.
    */
    int _count = 0;
};

