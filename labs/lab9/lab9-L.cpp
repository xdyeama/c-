#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

typedef std::pair<int, int> pair;

bool customComp(std::pair<int, int> l, std::pair<int, int> r){
    if(l.second == r.second){
        return l.first < r.first;
    }
    return l.second < r.second;
}a

int main(){
    int n, x, y, sum = 0;
    pair curr;
    std::cin >> n;
    std::vector<pair> vec;
    std::queue<int> q1;
    for(int i = 1; i <= n; i++){
        std::cin >> x >> y;
        vec.push_back(std::make_pair(i, x+y));
    }

    std::sort(vec.begin(), vec.end(), customComp);
    for(int i = 0; i < vec.size(); i++){
        q1.push(vec[i].first);
    }
    while(!q1.empty()){
        std::cout << q1.front() << " ";
        q1.pop();
    }


    return 0;

}