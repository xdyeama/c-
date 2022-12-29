#include <iostream>
#include <vector>
#include <algorithm>

typedef std::pair<int, int> pair;

bool mycomparator(pair l, pair r){
    if(l.first != r.first){
        return l.first < r.first;
    }
    return l.second < r.second;
}

int main(){
    int n, x, y;
    std::cin >> n;
    std::vector<pair> vec;
    for(int i = 0; i < n; i++){
        std::cin >> x;
        std::cin >> y;
        vec.push_back(std::make_pair(x, y));
    }

    std::sort(vec.begin(), vec.end(), mycomparator);

    

    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i].first << " " << vec[i].second << std::endl;
    } 

    return 0;
}