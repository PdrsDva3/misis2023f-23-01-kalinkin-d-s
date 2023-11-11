#include <iostream>
#include <string>
#include <vector>

int main(){
    int count = 0;
    std::vector<int> itog;
    std::cin >> count;
    while (count > 0){
        int a = 0;
        int b = 0;
        int c = 0;
        int res = 0;
        std::cin >> a >> b >> c;
        if (a < b){
            int u = a;
            a = b;
            b = u;
        }
        float sr = (a + b) / 2.0;
        float ost = sr - b;
        while (ost > 0){
            ost -= c;
            res += 1;
        }
        itog.push_back(res);
        count -= 1;
    }
    for (int elem : itog){
        std::cout << elem << std::endl;
    }
}
