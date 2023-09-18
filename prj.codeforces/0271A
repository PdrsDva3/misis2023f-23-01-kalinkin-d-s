#include <iostream>
 
int main() {
    int y;
    std::cin >> y;
    for (int i = y + 1; i < 10000; i += 1) {
        int c1 = i / 1000;
        int c2 = (i / 100) - (10 * (i / 1000));
        int c3 = (i / 10) - (10 * (i / 100));
        int c4 = i % 10;
        if ((c1 != c2) && (c1 != c3) && (c1 != c4) && (c2 != c3) && (c2 != c4) && (c3 != c4)) {
            std::cout << i;
            break;
        }
    }
 
}
