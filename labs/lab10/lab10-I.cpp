#include <iostream>
#include <algorithm>
#include <vector>


int main(){
    long long n, curr, i;
    std::cin >> n;
    std::vector<long long> origArr;
    std::vector<long long> revArr;
    for(i = 0; i < n; i++){
        std::cin >> curr;
        origArr.push_back(curr);
        revArr.push_back(curr);
    }
    std::reverse(revArr.begin(), revArr.end());
    for(i = 0; i < n; i++){
        if(origArr[i] == revArr[i]){
            std::cout << "OK" << std::endl;
        }else{
            std::cout << "Instead of " << origArr[i] << " here was " << revArr[i] << std::endl;
         }
    }

    return 0;
}