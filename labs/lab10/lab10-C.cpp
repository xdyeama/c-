#include <iostream>
#include <stack>
#include <algorithm>
#include <cmath>


bool hasSquare(std::string s){
    int a;
    for(int i = 0; i < s.length()-1; i++){
        a = ((int)s[i]-48) * 10 + ((int)s[i+1]-48);
        if(sqrt(a) == (int) sqrt(a)){
            return true;
        }
    }
    return false;
}
int getSquareIndex(std::string s){
    int a;
    for(int i = 0; i < s.length()-1; i++){
        a = ((int)s[i]-48) * 10 + ((int)s[i+1]-48);
        if(sqrt(a) == (int) sqrt(a)){
            return i;
        }
    }
    return -1;
}



int main(){
    std::string s;
    std::cin >> s;
    std::stack<char> chars;
    while(hasSquare(s)){
        if(s.length() == 0){
            std::cout << "Stack is empty";
            return 0;
        }
        if(getSquareIndex(s) >= 0){
            s = s.erase(getSquareIndex(s), 2);
        }
    }
    for(int i = 0; i < s.length(); i++){
        chars.push(s[i]);
    }
    while(!chars.empty()){
        std::cout << chars.top();
        chars.pop();
    }
    return 0;
}
/*

*/