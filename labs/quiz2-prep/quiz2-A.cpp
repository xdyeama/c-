#include <iostream>
#include <algorithm>
#include <vector>


int main(){
    int n, curr, sum = 0;;
    std::cin >> n;
    std::vector<int> v;
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        v.push_back(curr);
    }
    std::sort(v.begin(), v.end());
    for(int i = 1; i < n; i++){
        sum += v[i] - v[i-1] - 1;
     }
    std::cout << sum;
    return 0;
}