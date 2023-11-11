#include <iostream>
#include <vector>


int main() {
  int n = 0;
  std::cin >> n;
  std::vector<int> arr;
  while (n > 0) {
    int temp = 0;
    std::cin >> temp;
    arr.push_back(temp);
    n--;
  }
  int mx = arr[0];
  int mn = arr[0];
  int cnt = 0;
  for (int i : arr) {
    if (i > mx) {
      mx = i;
      cnt++;
    }
    else {
      if (i < mn) {
        mn = i;
        cnt++;
      }
    }
  }
  std::cout << cnt;
}
