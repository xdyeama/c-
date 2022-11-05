#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>


int isPrime(int num){
    if(num == 0 || num == 1 || num == -1){
        return 0;
    }

    num = abs(num);
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}


int main(){
    int n, curr, count = 0;
    std::cin >> n;
    std::vector<int> v;
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        v.push_back(curr);
    }
    std::vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        count += isPrime(*it);
    }
    std::cout << count;

    return 0;
}