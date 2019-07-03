#pragma once
#include <vector>
#include <iostream>
#include "Wrapper.h"

/*
*   @template class missing
*   @brief Klasa wyjatku. Rzucana gdy nie jest dostepny typ, ktorego chce uzyc uzytkownik.
*/
template <class T>
class missing : public std::exception {};


/*
*   @class ClonesF
*   @brief Klasa pozwalajaca na konstrukcje/klonowanie obiektow dowolnego typu. 
*          Najpierw nalezy uzyc metody add() aby dodac oryginal, ktorego potem chcemy uzyc.
*          Aby stworzyc kopie wczesniej dodanego oryginalu nalezy uzyc metody clone().
*/
class ClonesF {
    public:

    /*
    *   @template fn
    *   @brief Szablon funkcji pozwalajacej na dodanie do "fabryki" obiektu (oryginalu).
    */
    template <class T>
    void add(const T &object) {
        _container.push_back(new Wrapper<T>(object));
    }

    /*
    *   @template fn
    *   @brief Szablon funkcji pozwalajacej na sklonowanie wczesniej dodanego obiektu (oryginalu).
    *   @return Kopia przechowywanego obiektu typu T.
    *          W razie braku wystapienia obiektu danego typu rzucany jest wyjatek missing<T>. 
    */
    template <class T>
    T clone() {
        for(Base *ele : _container) {
            Wrapper<T> *tmp = dynamic_cast<Wrapper<T> *>(ele);
            if(tmp)
                return tmp->getData();
        }
        throw missing<T>();
    }

    ~ClonesF() {
        for(Base *ele : _container) 
            delete ele;
    }

    private:
    
    /*
    *   @param _container Polimorficzny kontener pozwalajacy na przechowywanie wskaznikow na obiekty dziedziczace po klasie bazowej Base.
    *                     Pozwala to na przechowywanie Wrapperow (dziedziczacych po Base), ktore z kolei moga przechowywac dane roznych typow.
    */
    std::vector<Base *> _container;
};

