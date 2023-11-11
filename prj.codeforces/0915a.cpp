#include <iostream>
#include <vector>
 
int main(){
    int n = 0;
    int k = 0;
    std::vector<int> vedro;
    std::cin >> n >> k;
    while (n > 0){
        int temp = 0;
        std::cin >> temp;
        vedro.push_back(temp);
        n--;
    }
    int max = 0;
    for (int v : vedro){
        if (k % v == 0){
            if (v > max){
                max = v;
            }
        }
    }
    int itog = k / max;
    std::cout << itog;
}
