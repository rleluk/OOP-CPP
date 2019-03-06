#pragma once
#include <string>
using namespace std;

/*
*   @class TestClassA
*   @brief prosta klasa wykorzystywana przez SmartPointer
*/
class TestClassA {
    public:
    // destruktor wypisujący tekst
    ~TestClassA();
    // konstruktor wypisujący tekst
    TestClassA(std::string name);
    // getter zmiennej _name
    std::string name() const;

    private:
    std::string _name;
};