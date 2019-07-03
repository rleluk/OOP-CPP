#pragma once
#include<string>

namespace num {
    /*
    *   @template srednia
    *   @brief Szablon funkcji obliczajacej wartosc srednia z elementow przekazanej tablicy. 
    *          Wymaga podania rozmiaru tablicy.
    *   @param array Tablica dla ktorej srednia chcemy policzyc.
    *   @param size Ilosc elementow tablicy.
    *   @param T Typ przekazywanej tablicy.
    */
    template<class T> 
    double srednia(const T *array, int size) {
        if(!size)
            return 0.;
        double sum = 0.0;
        for(int i = 0; i < size; i++) 
            sum += array[i];
        return sum/size;
    }

    /*
    *   @template srednia
    *   @brief Szablon funkcji obliczajacej wartosc srednia z elementow przekazanej tablicy. 
    *   @param array Tablica dla ktorej srednia chcemy policzyc.
    *   @param T Typ przekazywanej tablicy.
    *   @param size Rozmiar tablicy.
    */
    template<class T, int size> 
    double srednia(const T (&array)[size]) {
        return srednia(array, size);
    }

    /*
    *   @template czyWszystkiePierwszwe
    *   @brief Szablon funkcji sprawdzajacej, czy wszystkie elementy tablicy z zadanego przedzialu sa liczbami pierwszymi.
    *   @param start Poczatek przedzialu (indeks poczatkowy).
    *   @param end  Koniec przedzialu (indeks koncowy).
    *   @param array Tablica ktorej elementy sprawdzamy.
    */
    template<int start, int end>
    bool czyWszystkiePierwszwe(int *array) {
        for(int i = start; i < end; i++) 
            for(int j = 2; j < i; j++) 
                if(!(i % j)) return false;
        return true;
    }

    /*
    *   @fn text
    *   @brief Funkcja zwracajaca wartosci "TRUE" badz "FALSE" w zaleznosci od wartosci logicznej przekazanego parametru.
    *   @param value Parametr decydujacy o zwroconej wartosci.
    */
    std::string text(bool value) {
        return value ? "TRUE" : "FALSE";
    }
}