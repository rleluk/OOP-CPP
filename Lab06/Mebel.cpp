#include "Mebel.h"
#include <iostream>

Mebel::Mebel(int width, int height, int length) 
    : _width(width), _height(height), _length(length) {}

Mebel::~Mebel() {
    std::cout << "~Mebel" << std::endl;
}

void Mebel::print() const {
    std::cout << "Mebel: sz:" << _width << " wys:" << _height << " dl:" << _length; 
}

std::ostream &operator<<(std::ostream &output, const Mebel &source) {
    source.print();
    return output;
}