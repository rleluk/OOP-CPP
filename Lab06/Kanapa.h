#pragma once
#include "Lozko.h"
#include "Sofa.h"

class Kanapa final : public Sofa, public Lozko {
    public:
    Kanapa(int width, int height, int length, int seat, int val);
    ~Kanapa();
    void print() const;
};