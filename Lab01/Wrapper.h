#pragma once
class Wrapper{
    public:
    virtual ~Wrapper() = default;
    virtual void print(std::ostream &output) = 0;
    virtual Wrapper *copy() const = 0;
};