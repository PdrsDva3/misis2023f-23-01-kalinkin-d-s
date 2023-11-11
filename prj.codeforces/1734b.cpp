#include <iostream>
#include <vector>


int main() {
    int t = 0;
    std::cin >> t;
    while (t > 0) {
        int n = 0;
        std::cin >> n;
        for (int j = 1; j < n+1; j++){
            for (int i = 0; i < j; i++){
                if ((i == 0) || (i == j - 1)) {
                    std::cout << 1 << ' ';
                } else {
                    std::cout << 0 << ' ';
                }
            }
            std::cout << std::endl;
        }
    t--;
    }
}
