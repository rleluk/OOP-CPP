#pragma once
#include "Base.h"
#define MAX_SIZE 10

/*
*   @class Dir
*   @brief Klasa reprezentująca katalogi, dziedziczy po klasie bazowej Base
*/
class Dir : public Base {

    // deklaracja przyjaźni
    friend std::ostream& operator<<(std::ostream& output, const Dir &source);

    public:

    /*
    *   @fn ~Dir
    *   @brief Destruktor dealokujący pamięć i wypisujący przy tym odpowiednie komentarze
    */
    ~Dir();

    /*
    *   @fn Dir
    *   @brief Konstruktor tworzący nowy katalog o podanej nazwie
    */
    Dir(std::string name);

    /*
    *   @fn operator+=
    *   @brief Przeładowany operator służący do dodawania nowych plików/katalogów do naszego katalogu
    */
    void operator+=(Base *add);

    /*
    *   @fn get
    *   @brief Funkcja zwracająca zawartość katalogu, o podanej nazwie, znajdującego się w naszym katalogu
    */
    Dir* get(std::string name);

    /*
    *   @fn print
    *   @brief Funkcja zwracająca nazwę katalogu oraz jego zawartość
    *   @param space Ilość spacji, po której wyświetlana jest nazwa
    */
    void print(int space) const;

    private:

    /*
    *   @param _array
    *   @brief Tablica z zawartością katalogu
    */
    Base *_array[MAX_SIZE];

    /*
    *   @param _count
    *   @brief Aktualna ilość plików/podkatalogów znajdujących się w naszym katalogu
    */
    int _count = 0;
};

/*
*   @fn operator<<
*   @brief Przeładowany operator, pozwalający na wypisanie katalogu wraz z jego zawartością
*/
std::ostream& operator<<(std::ostream& output, const Dir &source);
