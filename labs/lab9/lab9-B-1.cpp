#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>


bool isEven(int a){
    return a % 2 == 0; 
}
bool sortDesc(const int a, const int b){
    return a < b;
}
bool sortAsc(const int a, const int b){
    return a > b;
}

int main(){
    int n, curr;
    std::cin >> n;
    std::vector<int> evenVec;
    std::vector<int> oddVec;
    std::stack<int> evenStack;
    std::stack<int> oddStack;
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        if(isEven(curr)){
            evenVec.push_back(curr);
        }else{
            oddVec.push_back(curr);
        }
    }
    std::sort(evenVec.begin(), evenVec.end(), sortDesc);
    std::sort(oddVec.begin(), oddVec.end(), sortAsc);
    std::vector<int>::iterator it;
    for(it = evenVec.begin(); it != evenVec.end(); it++ ){
        evenStack.push(*it);
    }
    for(it = oddVec.begin(); it != oddVec.end(); it++ ){
        oddStack.push(*it);
    }
    while(!evenStack.empty()){
        std::cout << evenStack.top() << " ";
        evenStack.pop();
    }
    while(!oddStack.empty()){
        std::cout << oddStack.top() << " ";
        oddStack.pop();
    }



    return 0;
}