#pragma once

/*
*   @class Base
*   @brief Klasa bazowa. 
*/
class Base {
    public:
    virtual ~Base() = default;
};


/*
*   @template class Wrapper
*   @brief Szablon do klasy dziedziczacej po klasie bazowej, przechowujacej dane roznego typu.
*          Pozwala na opakowanie danych. Dzieki dziedziczeniu po klasie Base, mozemy stworzyc
*          kontener polimorficzny, przechowywujacy wskazniki do obiektow klas Wrapper<T>.
*/
template<class T>
class Wrapper : public Base {
    public:
    Wrapper(const T &data) : _data(data) {}
    T getData() { return _data; }

    private:
    T _data;
};