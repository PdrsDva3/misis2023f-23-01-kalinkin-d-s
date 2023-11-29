#include <iostream>
#include <string>
#include <cstdint>
#include <iostream>
#include <sstream>


class Rational {
private:
    int64_t num_ = 0;
    int64_t din_ = 1;
    char sep = '/';

public:
    Rational() = default;

    Rational(const Rational&);

    Rational(const int64_t n, const int64_t d) : num_(n), din_(d) {}

    std::ostream& writeTo(std::ostream& ostrm) const;
    std::istream& writeIn(std::istream& istrm);

};

inline std::ostream operator<<(std::ostream& ostrm, const Rational& rhs){
    return rhs.writeTo(ostrm);
}