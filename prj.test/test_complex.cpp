#include "../prj.lab/complex/complex.h"

bool testParse(const std::string& str){
    std::istringstream istrm(str);
    Complex z;
    z.readFrom(istrm);
    if (istrm.good()){
        std::cout << "Read succes: " << str << "->" << z << std::endl;
    }else{
        std::cout << "Read error: " << str << "->" << z << std::endl;
    }
    return istrm.good();
}

//bool testSum()
bool testSum(double a, Complex b, Complex c){
    Complex testans1 = b + c;
    Complex testans2 = b + a;
    Complex testans3 = a + c;
    std::cout << testans1 << std::endl;
    std::cout << testans2 << std::endl;
    std::cout << testans3 << std::endl;
    return true; //пока что заглушка
}
//дописать тесты

int main(){
    Complex z(8.0);
    Complex x({4.0, 5});
    double y = 9.0;
    testSum(y, z, x);
    testParse("{1.4, 9}");
    testParse("{8.9, 9}");
    return 0;
}
