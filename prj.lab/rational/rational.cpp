#include "rational.h"

std::ostream& Rational::writeTo(std::ostream& ostrm) const{
    ostrm << num_ << sep << din_;
    return ostrm;
}

std::istream& Rational::readFrom(std::istream& istrm){
    int64_t num(0);
    char sep_(0);
    int64_t din(0);
    istrm >> num >> sep_ >> din;
    if (istrm.good()) {
        if ((Rational::num_ == num) && (Rational::sep == sep_) && (Rational::din_ == din)) {
            num_ = num;
            din_ = din;
        } else {
            istrm.setstate(std::ios_base::failbit);
        }
    }
    if (din_ == 0){
        throw std::runtime_error("Division by zero!");
    }else{
        return istrm;
    }
}


Rational operator+(Rational lhs, const Rational& rhs) {return lhs += rhs;}
Rational operator+(Rational lhs, const int64_t& rhs) {return lhs += Rational(rhs);}
Rational operator+(const int64_t& lhs, const Rational& rhs) {return Rational(lhs) += rhs;}

Rational operator-(Rational lhs, const Rational& rhs) {return lhs -= rhs;}
Rational operator-(Rational lhs, const int64_t& rhs) {return lhs -= Rational(rhs);}
Rational operator-(const int64_t& lhs, const Rational& rhs) {return Rational(lhs) -= rhs;}

Rational operator*(Rational lhs, const Rational& rhs) {return lhs *= rhs;}
Rational operator*(Rational lhs, const int64_t& rhs) {return lhs *= Rational(rhs);}
Rational operator*(const int64_t& lhs, const Rational& rhs) {return Rational(lhs) *= rhs;}


Rational operator/(Rational lhs, const Rational& rhs) {return lhs /= rhs;}
Rational operator/(Rational lhs, const int64_t& rhs) {return lhs /= Rational(rhs);}
Rational operator/(const int64_t& lhs, const Rational& rhs) {return Rational(lhs) /= rhs;}


int64_t nodf(int64_t n, int64_t d){
    while (n != 0 && d!= 0){
        if(n >= d){
            n %= d;
        }else{
            d %= n;
        }
    }
    return n + d;
}


void Rational::fix(){
    int sign_n;
    int sign_d;
    if (num_ < 0){
        sign_n = -1;
    }else{
        sign_n = 1;
    }
    if (din_ < 0){
        sign_d = -1;
    }else{
        sign_d = 1;
    }
    num_ *= sign_n;
    din_ *= sign_d;

    int64_t nod = nodf(num_, din_);
    num_ /= nod;
    din_ /= nod;
    
    num_ *= sign_n * sign_d;
}


Rational& Rational::operator+=(const Rational& rhs){
    int64_t n1 = num_;
    int64_t d1 = din_;
    int64_t n2 = rhs.num_;
    int64_t d2 = rhs.din_;
    if (d1!= d2){
        n1*= d2;
        n2*= d1;
        d1*= d2;
    }
    n1+= n2;
    num_ = n1;
    din_ = d1;
    fix();
    return *this;
}


Rational& Rational::operator-=(const Rational& rhs){
    int64_t n1 = num_;
    int64_t d1 = din_;
    int64_t n2 = rhs.num_;
    int64_t d2 = rhs.din_;
    if (d1!= d2){
        n1*=d2;
        n2*=d1;
        d1*=d2;
    }
    n1-=n2;
    num_ = n1;
    din_ = d1;
    fix();
    return *this;
}


Rational& Rational::operator*=(const Rational& rhs){
    num_ *= rhs.num_;
    din_ *= rhs.din_;
    fix();
    return *this;
}


Rational& Rational::operator/=(const Rational& rhs){
    if (rhs.num_ != 0){
        num_ *= rhs.din_;
        din_ *= rhs.num_;
        fix();
        return *this;
    }else{
        throw std::runtime_error("Division by zero");
    }
}

int main(){
    Rational a(2, 7);
    Rational b(4, 5);
    a/= 0;
    std::cout << a;
}