#include <iostream>
#include <string>
#include <vector>


std::string perf(std::string s){
    int size = s.size();
    std::string new_s;
    for (int i = 0; i < size; i++){
        if (s[i] != '.'){
            new_s += s[i];
        }
    }
    return new_s;
}

int main(){
    int count = 0;
    std::cin >> count;
    count *= 8;
    int count_2 = 0;
    std::string new_s;
    std::vector<std::string> itog;
    while (count > 0){
        std::string s;
        std::cin >> s;
        count_2 += 1;
        if (perf(s) != ""){
            new_s += perf(s);
        }
        if (count_2 % 8 == 0){
            itog.push_back(new_s);
            new_s = "";
        }
        count -= 1;
    }
    for (std::string elem : itog){
        std::cout << elem << std::endl;
    }
}
