#pragma once
#include <string>

/*
*   @class Urzadzenie 
*   @brief Abstrakcyjna klasa bazowa, sluzy wylacznie do dziedziczenia po niej
*/
class Urzadzenie {
    public:
    virtual std::string rodzaj() const = 0;
    virtual ~Urzadzenie() = default;
};

