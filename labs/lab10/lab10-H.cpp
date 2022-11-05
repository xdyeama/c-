#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

bool customComparator(int l, int r){
    return l < r;
}


int main(){
    int n, curr;
    std::cin >> n;
    std::vector<int> v;
    std::unordered_set<int> us;
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        us.insert(curr);
    }
    std::vector<int>::iterator it;
    std::unordered_set<int>::iterator it1;
    for(it1 = us.begin(); it1 != us.end(); it1++){
        std::cout << *it1 << " ";
    }

//     for(it1 = us.begin(); it1 != us.end(); it1++){
//         v.push_back(*it1);
//     }
//     std::reverse(v.begin(), v.end());
    
//     do{
//         for(it = v.begin(); it != v.end(); it++){
//             std::cout << *it << ' ';
//         }
//         std::cout << "\n";
//     }while(std::next_permutation(v.begin(), v.end(), customComparator));

    return 0;
    
}