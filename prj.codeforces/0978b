#include <iostream>
#include <string>
//#include <vector>

//0978b - указатели??
int main() {
    int n = 0;
    std::cin >> n;
    std::string str;
    std::cin >> str;
    int cnt = 0;
    int cnt_now = 0;
    int i = 0;
    while (i < n){
        if (str[i] == 'x'){
            cnt_now++;
        }else{
            if (cnt_now >= 2) {
                cnt += cnt_now-2;
            }
            cnt_now = 0;
        }
        i++;
    }
    if (cnt_now >=2){
        cnt += cnt_now - 2;
    }
    std::cout << cnt;
}
