#include <iostream>
#include <stack>
#include <queue>


int main(){
    std::string s;
    bool isValid = 1;
    int leftLeft = 0, leftRight = 0, rightLeft = 0, rightRight = 0;
    std::cin >> s;
    std::string leftHalf = s.substr(0, s.length() / 2);
    std::string rightHalf = s.substr(s.length()/2);
    std::queue<char> leftQueue;
    std::stack<char> rightStack;
    for(int i = 0; i < leftHalf.length(); i++){
        leftQueue.push(leftHalf[i]);
    }
    for(int i = 0; i < rightHalf.length(); i++){
        rightStack.push(rightHalf[i]);
    }
    bool isLeftBr = 0;
    bool isRightBr = 0;
    while(!leftQueue.empty()){
        char currCh = leftQueue.front();
        if(!isRightBr){
            if((int) currCh == 40){
                leftLeft++;
                isRightBr = 1;
            }
            if((int) currCh == 41){
                std::cout << "NO";
                return 0;
            }
        }else{
            if((int) currCh == 40){
                leftLeft++;
                isRightBr = 1;
            }
            if((int) currCh == 41){
                leftRight++;
                isRightBr = 0;
            }
        }
        leftQueue.pop();
    }
    if(leftRight > leftLeft){
        std::cout << "NO";
        return 0;
    }

    while(!rightStack.empty()){
        char currCh = rightStack.top();
        if(!isLeftBr){
            if((int) currCh == 41){
                rightRight++;
                isLeftBr = 1;
            }
            if((int) currCh == 40){
                std::cout << "NO";
                return 0;
            }
        }else{
            if((int) currCh == 41){
                rightRight++;
                isLeftBr = 1;
            }
            if((int) currCh == 40){
                rightLeft++;
                isLeftBr = 0;
            }
        }
        rightStack.pop();
    }
    if(rightLeft > rightRight){
        std::cout << "NO";
        return 0;
    }
    if(leftLeft + rightLeft != leftRight + rightRight){
        std::cout << "NO";
        return 0;
    }

    std::cout << "YES";
    return 0;
    }