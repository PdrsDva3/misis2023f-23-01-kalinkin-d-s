#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <sstream>
#include <limits>

struct Complex{
    Complex() = default;

    explicit Complex(const double real) : re(real), im(0.0) {}

    Complex(const double real, const double imaginary) : re(real), im(imaginary) {}

    double eps = 2 * std::numeric_limits<double>::epsilon();
    bool operator==(const Complex& rhs) const {return (std::abs(re - rhs.re) < eps) && (std::abs(im - rhs.im) < eps);}
    bool operator!=(const Complex& rhs) const {return !operator==(rhs);}

    Complex& operator+=(const Complex& rhs);
    Complex& operator+=(const double rhs) {return operator+=(Complex(rhs));}

    Complex& operator-=(const Complex& rhs);
    Complex& operator-=(const double rhs) {return operator-=(Complex(rhs));}

    Complex& operator*=(const Complex& rhs);
    Complex& operator*=(const double rhs) {return operator*=(Complex(rhs));}

    Complex& operator/=(const Complex& rhs);
    Complex& operator/=(const double rhs) {return operator/=(Complex(rhs));}

    std::ostream& writeTo(std::ostream& ostrm) const;
    std::istream& readFrom(std::istream& istrm);

    double re{0.0};
    double im{0.0};

    static const char leftBrace{'{'};
    static const char separator{','};
    static const char rightBrace{'}'};
};

inline std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs){
    return rhs.writeTo(ostrm);
}

inline std::istream& operator>>(std::istream& istrm, Complex& rhs){
    return rhs.readFrom(istrm);
}

Complex operator+(const Complex& lhs, const Complex& rhs);
Complex operator+(const Complex& lhs, const double& rhs);
Complex operator+(const double& lhs, const Complex& rhs);

Complex operator-(const Complex& lhs, const Complex& rhs);
Complex operator-(const Complex& lhs, const double& rhs);
Complex operator-(const double& lhs, const Complex& rhs);

Complex operator*(const Complex& lhs, const Complex& rhs);
Complex operator*(const Complex& lhs, const double& rhs);
Complex operator*(const double& lhs, const Complex& rhs);


Complex operator/(const Complex& lhs, const Complex& rhs);
Complex operator/(const Complex& lhs, const double& rhs);
Complex operator/(const double& lhs, const Complex& rhs);


#endif
