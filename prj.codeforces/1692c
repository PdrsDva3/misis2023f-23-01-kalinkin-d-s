#include <iostream>
#include <vector>
#include <string>


int main() {
    int t = 0;
    std::cin >> t;
    int dt = t;
    std::vector<int> itog1;
    std::vector<int> itog2;
    int str = 0;
    int matrix = 8;
    while (t > 0) {
        t--;
        matrix = 8;
        str = 0;
        int flag = 0;
        while (matrix > 0) {
            matrix--;
            std::string tp;
            std::cin >> tp;
            str+=1;
            for (int i = 0; i < 8; i++) {
                if ((tp[i] == '#') && (i<=5)) {
                    if ((tp[i + 2] == '#') && (flag == 0)) {
                        itog1.push_back(str+1);
                        itog2.push_back(i + 2);
                        flag = 1;
                    }
                }
            }
        }
    }
    for (int j = 0; j < dt; j++){
        std::cout << itog1[j] << ' ';
        std::cout << itog2[j] << std::endl;
    }
}
