#include <iostream>
//#include <string>
#include <vector>

int search(int o, std::vector<int> &a){
    for (int i : a){
        if(i == o){
            return 1;
        }
    }
    return 0;
}

int main() {
    int t = 0;
    std::cin >> t;
    while (t > 0){
        --t;
        std::vector<int> arr;
        int n = 0;
        int x = 0;
        std::cin >> n >> x;
        while (n > 0){
            int tp = 0;
            std::cin >> tp;
            arr.push_back(tp);
            n--;
        }
        int i = 1;
        int ans = 0;
        while (x != 0){
            if (search(i, arr) == 1){
                ans++;
            }else{
                x--;
                ans++;
            }
            i++;
        }

        while (search(i, arr) == 1){
            ans++;
            i++;
        }

        std::cout << ans << std::endl;
    }
}
