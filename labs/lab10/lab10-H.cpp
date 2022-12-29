#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

int main(){
    int n, curr;
    std::cin >> n;
    std::vector<int> v;
    std::unordered_set<int> s;
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        s.insert(curr);
    }
    std::vector<int>::iterator it;
    std::unordered_set<int>::iterator it1;
    v.assign(s.begin(), s.end());
    
    // it = std::unique(v.begin(), v.end());
    // v.resize(std::distance(v.begin(), it));
    sort(v.begin(), v.end());
    do{
        for(it = v.begin(); it != v.end(); it++){
            std::cout << *it << ' ';
        }
        std::cout << "\n";
    }while(std::next_permutation(v.begin(), v.end()));
    return 0;
}