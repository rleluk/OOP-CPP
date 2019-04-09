#pragma once
#include "Base.h"
#define MAX_SIZE 10

//klasa reprezentujaca katalog, dziedziczy po klasie Base
class Dir : public Base {

    // deklaracja przyjazni
    friend std::ostream& operator<<(std::ostream& output, const Dir &source);

    public:

    // destruktor zwalniajacy pamiec i wypisujacy przy tym odpowiednie komentarze
    ~Dir();

    // konstruktor tworzacy nowy katalog o podanej nazwie
    Dir(std::string name);

    // przeladowany operator += sluzacy do dodawania nowych plikow/podkatalogow
    void operator+=(Base *add);

    // funkcja zwracajaca zawartosc katalogu o podanej nazwie
    Dir* get(std::string name);

    // funkcja wypisujaca nazwe katalogu i jego zawartosc po zadanej liczbie spacji 
    void print(int space) const;

    private:
    Base *_array[MAX_SIZE];

    // zmienna calkowita przechowywujaca liczbe podkatalogow/plikow
    int _count = 0;
};
// przeladowanie operatora << - pozwala na wypisanie zawartosci katalogu
std::ostream& operator<<(std::ostream& output, const Dir &source);
