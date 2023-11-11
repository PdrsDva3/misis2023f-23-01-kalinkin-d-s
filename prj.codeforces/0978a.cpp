#include <iostream>
#include <vector>


int main(){
    int n = 0;
    std::cin >> n;
    int n1 = n;
    std::vector<int> ras;
    while (n > 0){
        int temp = 0;
        std::cin >> temp;
        ras.push_back(temp);
        n--;
    }
    int count = 0;
    std::vector<int> dva;
    for (int i = ras.size()-1; i >= 0; i--){
        for (int j = 0; j < dva.size(); j++){
            if (ras[i] == dva[j]){
                ras[i] = -1;
            }
        }
        if (ras[i] != -1){
            count++;
        }
        dva.push_back(ras[i]);
    }
    std::cout << count << std::endl;
    for (int i = dva.size()-1; i >= 0; i-- ){
        if (dva[i] != -1){
            std::cout << dva[i] << " ";
        }
    }
}
