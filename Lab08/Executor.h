#pragma once
#include <string>

// przestrzen nazw Executor zawierajaca niezbedne klasy i funkcje obslugujaca wyjatki
namespace Executor {
    
    /*
    *   @class Function
    *   @brief Abstrakcyjna klasa bazowa reprezentujaca funkcje. 
    */
    class Function {
        public:

        /*
        *   @fn operator()
        *   @brief Metoda czysto wirtualna. 
        *   Operator () udostepniajacy uzytkownikowi funktory.
        */
        virtual double operator()(double x) const = 0;
    };

    /*
    *   @class Result
    *   @brief Klasa przechowywujaca informacje o wywolaniu funkcji (poprawosc wykonania, wynik, komunikat bledu).
    */
    class Result {
        public:
        // poprawnosc wykonania
        bool valid;
        // wartosc 
        double value;
        // komunikat bledu
        std::string problem;

        Result() = default;

        /*
        *   @fn Result
        *   @brief Konstruktor przyjmujacy informacje o wykonaniu funkcji.
        */
        Result(bool val, double res, std::string prob);
 
        /*
        *   @fn operator double()
        *   @brief Operator konwersji rzucajacy wyjatek jezeli operacja nie zostala przeprowadzona poprawnie.
        *   @return Jezeli wykonanie funkji bylo prawidlowe to zwracana jest wartosc.
        */
        operator double() const;
    };

    /*
    *   @fn operator<<
    *   @brief Funkcja pozwalajaca na wypisanie komunikatu bledu wykonania danej operacji.
    */
    std::ostream &operator<<(std::ostream &output, Result &res);

    /*
    *   @fn secureRun
    *   @brief Funkcja pozwalajaca na uruchomienie funkcji wraz z obsluga wyjatkow. 
    *          Jezeli wykonanie jest poprawne, to dostajemy wynik, w przeciwnym wypadku otrzymujemy informacje o bledzie.
    */
    Result secureRun(const Function &fun, double x);
}