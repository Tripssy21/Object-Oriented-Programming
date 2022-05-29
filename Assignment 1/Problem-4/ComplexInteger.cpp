#include "ComplexInteger.h"

ComplexInteger::ComplexInteger()
{
    Real = 0;
    Imaginary = 0;
}

ComplexInteger::ComplexInteger(int Real, int Imaginary)
{
    this->Real = Real;
    this->Imaginary = Imaginary;
}

ComplexInteger::ComplexInteger(const ComplexInteger &c)
{
    Real = c.Real;
    Imaginary = c.Imaginary;
}

void ComplexInteger::setReal(int Real)
{
    this->Real = Real;
}

void ComplexInteger::setImaginary(int Imaginary)
{
    this->Imaginary = Imaginary;
}

int ComplexInteger::getReal()
{
    return Real;
}

int ComplexInteger::getImaginary()
{
    return Imaginary;
}

void ComplexInteger::operator=(const ComplexInteger &c)
{
    Real = c.Real;
    Imaginary = c.Imaginary;
}

void ComplexInteger::display()
{
    std ::cout << Real << "+" << Imaginary<<"i";
}

ComplexInteger::~ComplexInteger()
{
    Real = 0;
    Imaginary = 0;
}
