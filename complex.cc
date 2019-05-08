#include"complex.h"

ostream &operator<<(ostream &out, const Complex &c){
  out << "(" << c.getReal() << "," << c.getImaginary()<<")";
  return out;
}

Complex operator+(const Complex &c1, const Complex &c2){
  return Complex(c1.getReal()+c2.getReal(),c1.getImaginary()+c2.getImaginary());
}

Complex operator+(const Complex &c1, double d){
  return Complex(c1.getReal()+d,c1.getImaginary());
}

Complex operator+(double d,const Complex &c1){
  return Complex(c1.getReal()+d,c1.getImaginary());
}

bool Complex::operator==(const Complex &other) const{
  return real == other.real && imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex &other) const{
  return !(*this == other);
}


Complex::Complex(){
  real = 0;
  imaginary = 0;
}

Complex::Complex(double re, double im){
  real = re;
  imaginary = im;
}

Complex::Complex(const Complex &other){
  real = other.real;
  imaginary = other.imaginary;
  //cout<<"Copying complex object"<<endl;
}

const Complex &Complex::operator=(const Complex &other){
  //1r el que trobem a la esquerra d'una igualació, el segon el què retorna a la funcio i a dins als parentesis el que trobem a la dreta de la igualació
  real = other.real;
  imaginary = other.imaginary;
  cout<<"Overriting the operator"<<endl;
  return *this;
}
