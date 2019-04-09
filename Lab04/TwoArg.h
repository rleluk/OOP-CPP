#pragma once

/*
*   @class TwoArg
*   @brief Abstrakcyjna klasa bazowa reprezentująca operatory logiczne dwuargumentowe
*/
class TwoArg {
    public:

    /*
    *   @fn result
    *   @brief Metoda czysto wirtualna, wymagająca implementacji w klasie pochodnej, ma zwracać rezultat operacji logicznej
    */
    virtual bool result(bool first, bool second) const = 0;

    /*
    *   @fn ~TwoArg
    *   @brief Domyślny destruktor wirtualny
    */
    virtual ~TwoArg() = default;
};

/*
*   @class OR
*   @brief Klasa reprezentujaca operator OR, dziedziczy po klasie bazowej TwoArg
*/
class OR : public TwoArg {
    public:

    /*
    *   @fn OR
    *   @brief Domyślny konstruktor
    */
    OR() = default;

    /*
    *   @fn result
    *   @brief Metoda zwracająca rezultat operacji logicznej 
    */ 
    bool result(bool first, bool second) const override;
};

/*
*   @class AND
*   @brief Klasa reprezentująca operator AND, dziedziczy po klasie bazowej TwoArg
*/
class AND : public TwoArg {
    public:

    /*
    *   @fn AND
    *   @brief Domyślny konstruktor
    */
    AND() = default;

    /*
    *   @fn result
    *   @brief Metoda zwracająca rezultat operacji logicznej
    */
    bool result(bool first, bool second) const override;
};

