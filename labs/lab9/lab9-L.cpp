#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

bool customComp(std::pair<int, int> l, std::pair<int, int> r){
    return l.second <= r.second;
}
typedef std::pair<int, int> pair;

int main(){
    int n, x, y, sum = 0;
    pair curr;
    std::cin >> n;
    std::vector<pair> vec;
    std::queue<int> q1;
    for(int i = 0; i < n; i++){
        std::cin >> x >> y;
        vec.push_back(std::make_pair(i+1, x+y));
    }

    std::sort(vec.begin(), vec.end(), customComp);
    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i].first << " ";
    }


    return 0;
}