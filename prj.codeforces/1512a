#include <iostream>
#include <vector>



int main() {
    int t = 0;
    std::cin >> t;
    while (t > 0){
        int n = 0;
        std::cin >> n;
        int len = n;
        std::vector<int> arr;
        while(n > 0){
            int temp;
            std::cin >> temp;
            arr.push_back(temp);
            n--;
        }
        int ans = 0;
        for(int i = 1; i < len-1; i++){
            if ((arr[i-1] != arr[i]) && (arr[i] != arr[i+1])){//1 2 1
                ans = i + 1;
                break;
            }else if((arr[i-1] != arr[i]) && (arr[i] == arr[i+1])){//2 1 1
                ans = i;
                break;
            }else if ((arr[i-1] == arr[i]) && (arr[i] != arr[i+1])){//1 1 2
                ans = i + 2;
                break;
            }else{
                continue;
            }
        }
        std::cout << ans << std::endl;
        t--;
    }
}
