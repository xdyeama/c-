#include <iostream>
#include <map>

int main(){
    int n, curr, count = 0;
    std::cin >> n;
    std::map<int, int> numMap; 
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        numMap[curr]++;
    }
    std::map<int, int>::iterator it;
    for(it = numMap.begin(); it != numMap.end(); it++){
        int key = it -> first;
        int value = it -> second;
        if(value >= 2){
            count++;
        }
    }
    std::cout << count;
    return 0;
}