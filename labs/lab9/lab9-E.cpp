#include <iostream>
#include <map>


int main(){
    int n, count = 0;
    std::string curr;
    std::cin >> n;
    std::map<std::string, int> telNumsMap;
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        telNumsMap[curr]++;
    }
    std::map<std::string, int>::iterator it;
    for(it = telNumsMap.begin(); it != telNumsMap.end(); it++){
        std::string currNum = it -> first;
        int currCount = it -> second;
        if(currCount == 3){
            count++;
        }
    }
    std::cout << count;
    return 0;
}