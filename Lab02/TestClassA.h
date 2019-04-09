#pragma once
#include <string>
using namespace std;

/*
*   @class TestClassA
*   @brief Prosta klasa, przechowująca jedynie nazwę. 
*/
class TestClassA {
    public:
    
    /*
    *   @fn ~TestClassA 
    *   @brief Destruktor wypisujący informacje o usuwanym obiekcie.
    */
    ~TestClassA();

    /*
    *   @fn TestClassA 
    *   @brief Konstruktor przyjmujący nazwę, wypisujący informację o konstrukcji obiektu.
    */
    TestClassA(std::string name);

    /*
    *   @fn name 
    *   @brief Getter zwracający nazwę.
    */
    std::string name() const;

    private:
    std::string _name;
};