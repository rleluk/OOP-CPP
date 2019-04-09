#pragma once
#include <iostream>

class Mebel {
    public:
    Mebel(int width, int height, int length);
    Mebel() = default;
    virtual ~Mebel();
    virtual void print() const;

    protected:
    int _width;
    int _height;
    int _length;
};

std::ostream &operator<<(std::ostream &output, const Mebel &source);