#pragma once

/*
*   @class Rozdzielczosc
*   @brief Klasa przechowujaca 2 wartosci oznaczajace szerokosc i wysokosc.
*/
class Rozdzielczosc {
    public:
    Rozdzielczosc(int x, int y) : _x(x), _y(y) {}
    int getX() const { return _x; }
    int getY() const { return _y; }
    
    private:
    int _x;
    int _y;
};