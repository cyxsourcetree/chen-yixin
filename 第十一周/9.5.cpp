#ifndef COMPLEX-H
#define COMPLEX-H
#include <iostream>
using namespace std;

class Complex
{
  public:
      Complex(double=0.0,double=0.0);
      Complex add (const Complex&);
      Complex subtract (const Complex&);
      void printComplex();
      void setComplexNumber(double,double);
  private :
    double realPart;
    double imaginaryPart;
};


Complex::Complex(double real,double imaginary)
{
    setComplexNumber(real,imaginary);
}
 Complex Complex::add(const Complex&right)
 {
     return Complex(
    realPart+right.realPart,imaginaryPart+right.imaginaryPart);

 }
Complex Complex::add(const Complex&right)
 {
     return Complex(
    realPart-right.realPart,imaginaryPart-right.imaginaryPart);
 }
void Complex::printComplex()
{
    cout<<'('<<realPart<<","<<imaginaryPart<<')';
}
void Complex::setComplexNumber(double rp,double ip)
{
    realPart=rp;
    imaginaryPart=ip;
}
