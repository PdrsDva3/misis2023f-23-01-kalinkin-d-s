#include <iostream>

int main(){
    int n = 0;
    int k = 0;
    std::cin >> n >> k;
    int max = -2147483640;
    for (int i = 0; i < n; i+= 1){
        int fi = 0;
        int ti = 0;
        std::cin >> fi >> ti;
        if (ti > k){
            fi = fi - (ti - k);
        }
        if (fi > max){
            max = fi;
        }
    }
    std::cout << max;
}
