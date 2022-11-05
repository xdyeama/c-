#include <iostream>
#include <algorithm>
#include <vector>


int main(){
    int n, m, curr;
    std::vector<int> v;
    std::cin >> n >> m;
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        v.push_back(curr);
    }
    std::rotate(v.begin(), v.begin() + m,v.end());
    std::reverse(v.begin(), v.end());
    
    std::vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        std::cout << *it << " ";
    }
    return 0;
}