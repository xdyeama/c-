#include <iostream>
#include <algorithm>
#include <map>
#include <vector>


typedef std::pair<std::string, double> custom_pair;

int main(){
    int n, m;
    long long num, sum = 0;
    std::string city;
    std::map<std::string, int> map1;
    std::vector<custom_pair> v;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> m;
        for(int j = 0; j < m; j++){
            std::cin >> city >> num;
            map1[city] += num;
        }
    }
    
    for(auto m: map1){
        sum += m.second;
    }
    for(auto m: map1){
        v.push_back(std::make_pair(m.first, ((double) m.second / sum) * 100));
    }
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i].first << " " << v[i].second << std::endl;
    }


    return 0;
}