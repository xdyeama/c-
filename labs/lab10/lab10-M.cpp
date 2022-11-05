#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    int n, m, curr;
    std::cin >> n >> m;
    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> v3;
    std::vector<int>::iterator it;
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        v1.push_back(curr);
    }
    for(int i = 0; i < m; i++){
        std::cin >> curr;
        v2.push_back(curr);
    }
    it = std::unique(v1.begin(), v1.end());
    v1.resize(std::distance(v1.begin(), it));

    it = std::unique(v2.begin(), v2.end());
    v2.resize(std::distance(v2.begin(), it));
    for(it = v1.begin(); it != v1.end(); it++){
        std:: cout << *it << " ";
    }
    std::cout << "\n";
    for(it = v2.begin(); it != v2.end(); it++){
        std:: cout << *it << " ";
    }
    std::cout << "\n";

    std::reverse(v1.begin(), v1.end());
    std::reverse(v2.begin(), v2.end());
    while(v1.size() > 0 && v2.size() > 0){
        v3.push_back(v1.back());
        v1.pop_back();
        v3.push_back(v2.back());
        v2.pop_back();
    }
    it = std::unique(v3.begin(), v3.end());
    v3.resize(std::distance(v3.begin(), it));
    for(it = v3.begin(); it != v3.end(); it++){
        std::cout << *it << " ";
    }
    return 0;
}