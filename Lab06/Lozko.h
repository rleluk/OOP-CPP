#pragma once
#include "Mebel.h"

class Lozko : virtual public Mebel {
    public:
    Lozko(int width, int height, int length, int val);
    ~Lozko();
    void print() const;
    
    protected:
    Lozko(int val);
    int _val;
};