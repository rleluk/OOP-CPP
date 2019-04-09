#pragma once
#include "Base.h"
#include <iostream>

// klasa reprezentujaca plik, dziedziczy po klasie Base
class File : public Base {
    public:
    // domyslny konstruktor
    ~File() = default;

    // konstruktor tworzacy plik o podanej nazwie
    File(std::string name);

    // funkcja wypisujaca nazwe pliku po zadanej liczbie spacji
    void print(int space) const;
};