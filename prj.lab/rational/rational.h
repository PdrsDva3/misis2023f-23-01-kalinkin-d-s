#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
#include <cstdint>


class Rational {
public:
    Rational() = default;
    Rational(int64_t n) : num_(n) {}
    Rational(const int64_t n, const int64_t d) : num_(n), din_(d) {fix();}
    ~Rational() = default; // деструктор (сборщик мусора)
    Rational(const Rational& rhs) = default;

    Rational& operator=(const Rational& rhs) {num_ = rhs.num_; din_ = rhs.din_; return *this;}

    bool operator==(const Rational& rhs) const {return num_*rhs.din_ == rhs.num_*din_;}
    bool operator==(const int rhs) const {return operator==(Rational(rhs));}

    bool operator!=(const Rational& rhs) const {return !operator==(rhs);}
    bool operator!=(const int& rhs) const {return !operator==(rhs);}

    bool operator>(const Rational& rhs) const {return num_*rhs.din_ > rhs.num_*din_;}
    bool operator>(const int& rhs) const {return operator>(Rational(rhs));}

    bool operator>=(const Rational& rhs) const {return (operator>(rhs) || operator==(rhs));}
    bool operator>=(const int& rhs) const {return operator>=(Rational(rhs));}

    bool operator<=(const Rational& rhs) const {return !operator>(rhs);}
    bool operator<=(const int& rhs) const {return operator<=(Rational(rhs));}

    bool operator<(const Rational& rhs) const {return (!operator>(rhs) && operator!=(rhs));}
    bool operator<(const int& rhs) const {return operator<=(Rational(rhs));}

    Rational& operator+=(const Rational& rhs);
    Rational& operator+=(const int& rhs) {return operator+=(Rational(rhs));}

    Rational& operator-=(const Rational& rhs);
    Rational& operator-=(const int& rhs) {return operator-=(Rational(rhs));}

    Rational& operator*=(const Rational& rhs);
    Rational& operator*=(const int& rhs) {return operator*=(Rational(rhs));}

    Rational& operator/=(const Rational& rhs);
    Rational& operator/=(const int& rhs) {return operator/=(Rational(rhs));}


    std::ostream& writeTo(std::ostream& ostrm) const;
    std::istream& readFrom(std::istream& istrm);

private:
    int64_t num_ = 0;
    int64_t din_ = 1;
    char sep = '/';
    void fix();

};


inline std::ostream& operator<<(std::ostream& ostrm, const Rational& rhs){
    return rhs.writeTo(ostrm);
}

inline std::istream& operator>>(std::istream& istrm, Rational& rhs){
    return rhs.readFrom(istrm);
}

Rational operator+(Rational lhs, const Rational& rhs);
Rational operator+(Rational lhs, const int64_t& rhs);
Rational operator+(const int64_t& lhs, const Rational& rhs);

Rational operator-(Rational lhs, const Rational& rhs);
Rational operator-(Rational lhs, const int64_t& rhs);
Rational operator-(const int64_t& lhs, const Rational& rhs);

Rational operator*(Rational lhs, const Rational& rhs);
Rational operator*(Rational lhs, const int64_t& rhs);
Rational operator*(const int64_t& lhs, const Rational& rhs);


Rational operator/(Rational lhs, const Rational& rhs);
Rational operator/(Rational lhs, const int64_t& rhs);
Rational operator/(const int64_t& lhs, const Rational& rhs);

#endif