#pragma once
#include <iostream>
#include <string>

/*
*   @class Base
*   @brief Abstrakcyjna klasa bazowa
*/
class Base {
    public:
    
    /*
    *   @fn Base
    *   @brief Konstruktor przyjmujący nazwę
    */
    Base(std::string name);

    /*
    *   @fn getName
    *   @brief Getter dla składowej _name
    */
    std::string getName() const;

    /*
    *   @fn print
    *   @brief Metoda czysto wirtualna, wymagająca implementacji w klasach pochodnych
    */
    virtual void print(int space) const = 0;

    /*
    *   @fn ~Base
    *   @brief Domyślny destruktor wirtualny
    */
    virtual ~Base() = default;

    protected:
    std::string _name;
};