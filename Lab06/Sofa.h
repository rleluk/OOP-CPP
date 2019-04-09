#pragma once
#include "Mebel.h"

class Sofa : virtual public Mebel {
    public:
    Sofa(int width, int height, int length, int seat);
    ~Sofa();
    void print() const;

    protected:
    Sofa(int seat);
    int _seat;
};