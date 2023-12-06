#include "complex.h"

Complex operator+(const Complex& lhs, const Complex& rhs) {Complex new_obj; new_obj += lhs; new_obj += rhs; return new_obj;}
Complex operator+(const Complex& lhs, const double& rhs) {Complex new_obj; new_obj += lhs; new_obj += rhs; return new_obj;}
Complex operator+(const double& lhs, const Complex& rhs) {Complex new_obj; new_obj += lhs; new_obj += rhs; return new_obj;}

Complex operator-(const Complex& lhs, const Complex& rhs) {Complex new_obj = lhs; new_obj -= rhs; return new_obj;}
Complex operator-(const Complex& lhs, const double& rhs) {Complex new_obj = lhs; new_obj -= rhs; return new_obj;}
Complex operator-(const double& lhs, const Complex& rhs) {Complex new_obj; new_obj += lhs; new_obj -= rhs; return new_obj;}

Complex operator*(const Complex& lhs, const Complex& rhs) {Complex new_obj = lhs; new_obj *= rhs; return new_obj;}
Complex operator*(const Complex& lhs, const double& rhs) {Complex new_obj = lhs; new_obj *= rhs; return new_obj;}
Complex operator*(const double& lhs, const Complex& rhs) {Complex new_obj = rhs; new_obj *= lhs; return new_obj;}


Complex operator/(const Complex& lhs, const Complex& rhs) {Complex new_obj = lhs; new_obj /= rhs; return new_obj;}
Complex operator/(const Complex& lhs, const double& rhs) {Complex new_obj = lhs; new_obj /= rhs; return new_obj;}
Complex operator/(const double& lhs, const Complex& rhs) {Complex new_obj(lhs); new_obj /= rhs; return new_obj;}

std::ostream& Complex::writeTo(std::ostream& ostrm) const{
    ostrm << leftBrace << re << separator << im << rightBrace;
    return ostrm;
}

std::istream& Complex::readFrom(std::istream& istrm){
    char leftBrace(0);
    double real(0.0);
    char comma(0);
    double imaganary(0.0);
    char rightBrace(0);
    istrm >> leftBrace >> real >> comma >> imaganary >> rightBrace;
    if (istrm.good()) {
        if ((Complex::leftBrace == leftBrace) && (Complex::separator == comma) && (Complex::rightBrace == rightBrace)) {
            re = real;
            im = imaganary;
        } else {
            istrm.setstate(std::ios_base::failbit);
        }
    }
    return istrm;
}

//inline std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs){
//    return rhs.writeTo(ostrm);
//}
//
//inline std::istream& operator>>(std::istream& istrm, Complex& rhs){
//    return rhs.readFrom(istrm);
//}

Complex& Complex::operator+=(const Complex& rhs){
    re += rhs.re;
    im += rhs.im;
    return *this;
}

Complex& Complex::operator-=(const Complex& rhs){
    re -= rhs.re;
    im -= rhs.im;
    return *this;
}

Complex& Complex::operator*=(const Complex& rhs){

    double a = re, b = im, c = rhs.re, d = rhs.im;
    re = a * c - b * d;
    im = a * d + b * c;
    return *this;
}

Complex& Complex::operator/=(const Complex& rhs){

    double a = re, b = im, c = rhs.re, d = rhs.im;
    if (c == 0 && d==0){
        throw std::runtime_error("Division by zero");
    }
    re = (a * c + b * d) / (c * c + d * d);
    im = (b * c - a * d) / (c * c + d * d);
    return *this;
}


