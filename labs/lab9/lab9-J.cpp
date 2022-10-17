#include <iostream>
#include <map>
#include <queue>
#include <algorithm>

typedef std::pair<std::string, int> pair;

bool customComparator(const pair &l, const pair &r){
    return l.first < r.first;
}

int main(){
    int n, epNum;
    std::string dorama; 
    std::cin >> n;
    std::map<std::string, int> doramaMap;
    std::vector<pair> vec;
    std::queue<pair> q1;
    for(int i = 0; i < n; i++){
        std::cin >> dorama;
        std::cin >> epNum;
        doramaMap[dorama] += epNum;
    }
    std::copy(doramaMap.begin(), doramaMap.end(), std::back_inserter< std::vector<pair> >(vec));
    std::sort(vec.begin(), vec.end(), customComparator);
    unsigned long long vecSize = vec.size();
    for(unsigned long long i = 0; i < vecSize; i++){
        q1.push(std::make_pair(vec[i].first, vec[i].second));
    }
    while(!q1.empty()){
        std::cout << q1.front().first << " " << q1.front().second << std::endl;
        q1.pop();
    }
    return 0;
}