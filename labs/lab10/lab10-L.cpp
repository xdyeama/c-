#include <iostream>
#include <algorithm>
#include <vector>


int getSize(int n){
    if(n == 1){
        return 1;
    }
    return n + getSize(n-1);
}

int main(){
    int n, prevIndex = 0;
    std::cin >> n;
    int vecSize = getSize(n);
    std::vector<int> v(vecSize);

    for(int i = 1; i <= n; i++){
        std::fill(v.begin()+prevIndex, v.begin()+prevIndex+i, i);
        prevIndex = prevIndex+i;
    }

    std::vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        std::cout << *it << " ";
    }

    return 0;
}