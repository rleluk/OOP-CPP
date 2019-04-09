#pragma once
#include <iostream>
#include <string>

//abstrakcyjna klasa bazowa
class Base {
    public:
    // konstruktor przyjmujacy nazwe
    Base(std::string name);
    
    // funkcja zwracajaca nazwe
    std::string getName() const;

    // wirtualna metoda - zaimplementowana w klasach pochodnych
    virtual void print(int space) const = 0;

    // wirtualny konstruktor
    virtual ~Base() = default;

    protected:
    std::string _name;
};