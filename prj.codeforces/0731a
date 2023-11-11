#include <iostream>
#include <string>


int main() {
    std::string str;
    std::cin >> str;
    str = 'a' + str;
    int len = str.size();
    int cnt = 0;
    for (int i = 0; i < len-1; i++){
        int num1 =  (str[i] > str[i+1]) ? (str[i] - str[i+1]) : (str[i+1] - str[i]);
        int num2 = 26 - num1;
        cnt+= (num2 > num1) ? num1 : num2;
    }
    std::cout << cnt;
}
