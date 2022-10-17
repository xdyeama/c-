#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

typedef std::pair<char, char> charPair;
typedef std::pair<int, charPair> pair;

bool customComparator(std::pair<char, int> l, std::pair<char, char> r){
    if(l.first != r.first){
        return l.first < r.first;
    }
    return l.second < r.second;
}

int main(){
    std::string s;
    int n;
    std::cin >> n;
    std::map<int, pair> charMap;
    std::vector<pair> vec;
    for(int i = 0; i < n; i++){
        std::getline(std::cin, s);
        char first = s[0];
        char second = s[1];
        charPair charsPair = std::make_pair(first, second);
        charMap[i] = std::make_pair(first, second);
    }

    std::copy(charMap.begin(), charMap.end(), std::back_inserter< std::vector<pair> >(vec));
    std::sort(vec.begin(), vec.end(), customComparator);

    
    return 0;
}