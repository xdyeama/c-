#include <iostream>
#include <algorithm>
#include <vector>

int isPalindrome(std::vector<int> v){
    // std::vector<int>::iterator it = v.begin();
    // std::vector<int>::iterator rit = v.end()-1;
    // while(it != rit){
    //     if(*it != *rit){
    //         return 0;
    //     }
    //     rit--;
    // }
    // return 1;
    for(int i = 0; i < v.size(); i++){
        if(v[i] != v[v.size()-1-i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n, curr;
    std::cin >> n;
    std::vector<int> v;
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        v.push_back(curr);
    }
    std::vector<int>::iterator it;
    sort(v.begin(), v.end());
    do{
        if(isPalindrome(v) == 1){
            for(it = v.begin(); it != v.end(); it++){
                std::cout << *it << " ";
            }
            return 0;
        }
    }while(std::next_permutation(v.begin(), v.end()));
    std::cout << "Impossible";
    return 0;

}