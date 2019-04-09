#include "Lozko.h"

Lozko::Lozko(int width, int height, int length, int val) : Mebel(width, height, length), _val(val) {}

Lozko::Lozko(int val) : _val(val) {}

Lozko::~Lozko() {
    std::cout << "~Lozko" << std::endl;
}

void Lozko::print() const {
    std::cout << "Lozko: ";
    Mebel::print();
    std::cout << "  sz.spania: " << _val;
}