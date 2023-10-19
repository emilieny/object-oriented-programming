#include <iostream>
using std::cout, std::endl;

#include "Complex.h"


Complex::Complex(int real, int imaginaria): real(real), imaginaria(imaginaria){

}

Complex Complex::operator+(const Complex &right) const{
    Complex temp;
    temp.real = real + right.real;
    temp.imaginaria = imaginaria + right.imaginaria;
    return temp;
}

Complex Complex::operator-(const Complex &right) const{
    Complex result;
    result.real = real - right.real;
    result.imaginaria = imaginaria - right.imaginaria;
    return result;
    //return Complex(real - right.real, imaginary - right.imaginary);
}

Complex Complex::operator+=(const Complex &right){
    real += right.real;
    imaginaria += right.imaginaria;
    return *this;
}

Complex Complex::operator-=(const Complex &right){
    real -= right.real;
    imaginaria -= right.imaginaria;
    return *this;
}

Complex Complex::operator++(){
    real = real + 1;
    imaginaria = imaginaria + 1;
    return *this;
}

Complex Complex::operator--(){
    real = real - 1;
    imaginaria = imaginaria - 1;
    return *this;
}

void Complex::print() const{
    cout << "(" << real << ", " << imaginaria << ")";
    
}