#pragma once

/*
*   @class OneArg
*   @brief Abstrakcyjna klasa bazowa reprezentująca operatory logiczne jednoargumentowe
*/
class OneArg {
    public:

    /*
    *   @fn result
    *   @brief Metoda czysto wirtualna, wymagająca implementacji w klasach pochodnych
    *   @return Wynik operacji logicznej
    */
    virtual bool result(bool first) const = 0;
    
    /*
    *   @fn ~OneArg
    *   @brief Domyślny destruktor wirtualny
    */
    virtual ~OneArg() = default;
};

/*
*   @class NOT
*   @brief Klasa reprezentujaca operator NOT, dziedziczy po klasie OneArg
*/
class NOT : public OneArg {
    public:

    /*
    *   @fn NOT
    *   @brief Domyślny konstruktor
    */
    NOT() = default;
    
    /*
    *   @fn result
    *   @brief Metoda zwracająca rezultat operacji logicznej (zaprzeczenia)
    */
    bool result(bool first) const override;
};
