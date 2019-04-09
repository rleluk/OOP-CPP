#include "Kanapa.h"

Kanapa::Kanapa(int width, int height, int length, int seat, int val)
    : Mebel(width, height, length), Sofa(seat), Lozko(val) {}

Kanapa::~Kanapa() {
    std::cout << "~Kanapa" << std::endl;
}

void Kanapa::print() const {
    Mebel::print();
    std::cout << std::endl << " jako ";
    Sofa::print();
    std::cout << std::endl << " jako ";
    Lozko::print();
}