#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>




long long powers(){
    static int i;
    if(i == 0){
        return ++i;
    }
    long long a = i++;
    long long b = a;
    for(int j = 0; j < b; j++){
        a *= a;
    }
    return a;
}

int main(){
    int n;
    std::cin >> n;
    std::vector<long long> v(n+1);
    std::generate(v.begin(), v.end(), powers);
    std::vector<long long>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        std::cout << *it << " ";
    }
    return 0;
}