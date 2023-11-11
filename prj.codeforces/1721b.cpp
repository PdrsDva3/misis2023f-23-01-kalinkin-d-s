#include <iostream>
//#include <vector>
//#include <string>
 
 
int main(){
    int t = 0;
    std::cin >> t;
    while (t > 0){
        int n = 0;
        int m = 0;
        int sx = 0;
        int sy = 0;
        int d = 0;
        std::cin >> n >> m >> sx >> sy >> d;
        if (((sy - d - 1 > 0) && (sx + d < n)) || ((sy + d < m) && (sx - d - 1 > 0)) ) {
            std::cout << m+n-2 << std::endl;
        }else{
            std::cout << -1 << std::endl;
        }
        t--;
    }
}
