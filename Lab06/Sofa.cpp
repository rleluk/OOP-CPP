#include "Sofa.h"

Sofa::Sofa(int width, int height, int length, int seat) 
    : Mebel(width, height, length), _seat(seat) {}

Sofa::Sofa(int seat) : _seat(seat) {}

Sofa::~Sofa() {
    std::cout << "~Sofa" << std::endl;
}

void Sofa::print() const {
    std::cout << "Sofa: ";
    Mebel::print();
    std::cout << "  siedzisko: " << _seat;
}