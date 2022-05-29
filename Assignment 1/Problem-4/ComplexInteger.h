#include <iostream>
#include <string>
#include <vector>

class ComplexInteger
{
private:
    int Real, Imaginary;

public:
    ComplexInteger();
    ComplexInteger(int Real, int Imaginary);
    ComplexInteger(const ComplexInteger &c);
    void setReal(int Real);
    void setImaginary(int Imaginary);
    int getReal();
    int getImaginary();
    void operator=(const ComplexInteger &c);
    void display();
    ~ComplexInteger();
};