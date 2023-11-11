#include <iostream>
#include <vector>
#include <cmath>


int main(){
    int x = 0;
    std::cin >> x;
    for (int i = 0; i < x; i+= 1){
        int number = 0;
        std::cin >> number;
        
        std::vector<int> data;
        int k = 0;
        while (number > 0){
            int temp;
            temp = (number % 10) * std::pow(10, k);
            if (temp > 0){
                data.push_back(temp);
            }
            k+= 1;
            number/= 10;
        }   
        std::cout << data.size() << std::endl;
        for (int i = data.size() - 1; i >= 0; i-= 1) {
            std::cout << data[i] << " ";
        
        }
    }
}
