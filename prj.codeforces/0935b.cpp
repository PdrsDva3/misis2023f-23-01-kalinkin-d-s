#include <iostream>
#include <string>
 
int main(){
    int n = 0;
    std::cin >> n;
    std::string road;
    std::cin >> road;
    int cnt = 0;
    int xf = 0;
    int yf = 0;
    for (int i = 0; i < n-2; i++){
        if (road[i] == 'U'){
            yf++;
        }else{
            xf++;
        }
        int xy = xf;
        if ( ((xf == yf-1) && (road[i+1] == 'R') && (road[i+2] == 'R') ) || (((xf-1 == yf) && (road[i+1] == 'U') && (road[i+2] == 'U')))){
            cnt++;
        }
    }
    std::cout << cnt << std::endl;
}
