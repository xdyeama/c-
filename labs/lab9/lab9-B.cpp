#include <iostream>
#include <stack>
#include <algorithm>


bool isEven(int n){
    return n % 2 == 0;
}

std::stack<int> sortStack(std::stack<int> inpStack, bool isAsc){
    std::stack<int> tempStack;
    while(!inpStack.empty()){
        int temp = inpStack.top();
        inpStack.pop();
        if(isAsc){
            while(!tempStack.empty() && temp <= tempStack.top()){
                tempStack.push(inpStack.top());
                inpStack.pop();
            }
            tempStack.push(temp);
        }else{
            while(!tempStack.empty() && temp > tempStack.top()){
                tempStack.push(inpStack.top());
                inpStack.pop();
            }
            tempStack.push(temp);
        }
    }
    return tempStack;
}

int main(){
    int n, curr;
    std::cin >> n;
    std::stack<int> evenStack;
    std::stack<int> oddStack;
    std::stack<int> tempStack;
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        if(isEven(curr)){
            evenStack.push(curr);
        }else{
            oddStack.push(curr);
        }
    }
    evenStack = sortStack(evenStack, 1);
    oddStack = sortStack(oddStack, 0);
    

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