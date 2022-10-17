#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

typedef std::pair<int, int> pair;

bool mycomparator(std::pair<int, int> l, std::pair<int, int> r){
    if(l.first != r.first){
        return l.first < r.first;
    }
    return l.second < r.second;
}

int main(){
    int n, x, y;
    std::cin >> n;
    std::vector<pair> vec;
    std::multimap<int, int> coordMap;
    for(int i = 0; i < n; i++){
        std::cin >> x;
        std::cin >> y;
        coordMap.insert(std::make_pair(x, y));
    }

    std::copy(coordMap.begin(), coordMap.end(), std::back_inserter< std::vector<pair> >(vec));
    std::sort(vec.begin(), vec.end(), mycomparator);

    

    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i].first << " " << vec[i].second << std::endl;
    } 




    return 0;
}