#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

typedef std::pair<std::string, int> pair;

bool customComparator(pair l, pair r){
    return l.first < r.first;
}

int main(){
    int n;
    std::string curr;
    std::cin >> n;
    std::queue<std::string> q1;
    std::vector<pair> vec;
    for(int i = 1; i <= n; i++){
        std::cin >> curr;
        q1.push(curr);
    }
    vec.push_back(std::make_pair(q1.front(), 1));
    q1.pop();
    int i = 2;
    bool notFound = 1;
    while(!q1.empty()){
        curr = q1.front();
        for(int j = 0; j < vec.size(); j++){
            if(vec[j].first == curr){
                notFound = 0;
            }
        }
        if(notFound == 1){
            vec.push_back(std::make_pair(curr, i));
        }
        notFound = 1;
        q1.pop();
        i++;
    }
    std::sort(vec.begin(), vec.end(), customComparator);
    for(i = 0; i < vec.size(); i++){
        std::cout << vec[i].first << " " << vec[i].second << std::endl;
    }
    return 0;
}