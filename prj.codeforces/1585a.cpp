#include <iostream>
//#include <string>
//#include <vector>
 
 
//==1585a==
//сумма соседних++
//обработка при вводе++
// счётчик 0 и 1 подряд--
int main() {
    int t = 0;
    std::cin >> t;
    while (t > 0) {
        int n = 0;
        int rost = 1;
        std::cin >> n;
        int sum = 0;
        int flag = 0;
        int f = 0;
        while (n > 0){
            int temp = 0;
            std::cin >> temp;
            if (temp == 1){
                flag = 0;
                sum++;
                if (sum == 1){
                    rost++;
                }else{
                    if (sum == 2){
                        rost += 5;
                    }else{
                        if (sum > 2){
                            rost+= 5;
                        }
                    }
                }
            }else{
                sum = 0;
                flag++;
                if (flag == 2){
                    f = 2;
                }
            }
            n-=1;
        }
        if (f == 2){
            rost = -1;
        }
        std::cout << rost << std::endl;
        t--;
    }
}
