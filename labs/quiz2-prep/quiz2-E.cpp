#include <iostream>
#include <set>

int main(){
    int n, curr;
    std::cin >> n;
    std::set<int> s;
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        s.insert(curr);
    }
    if(s.size() > 1){
        std::cout << "NO";
    }else{
        std::cout << "YES";
    }

    return 0;
}