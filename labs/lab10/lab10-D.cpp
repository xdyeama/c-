#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

int min(int s1, int s2){
    return s1 <= s2;
}

bool customComparator(std::vector<int> l, std::vector<int> r){
    if(std::accumulate(l.begin(), l.end(), 0) == std::accumulate(r.begin(), r.end(), 0)){
        if(l.size() == r.size()){
            for(int i = 0; i < min(l.size(), r.size()); i++){
                return l[i] < r[i];
            }
        }
        return l.size() < r.size();
    }
    return std::accumulate(l.begin(), l.end(), 0) < std::accumulate(r.begin(), r.end(), 0);
}

int main(){
    int n, m, curr;
    std::cin >> n;
    std::vector<std::vector<int> > v;
    for(int i = 0; i < n; i++){
        std::cin >> m;
        std::vector<int> v1;
        for(int j = 0; j < m; j++){
            std::cin >> curr;
            v1.push_back(curr);
        }
        v.push_back(v1);
    }
    std::sort(v.begin(), v.end(), customComparator);
    for(int i = 0; i < n; i++){
        std::vector<int> vec = v[i];
        for(int j = 0; j < vec.size(); j++){
            std::cout << vec[j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}