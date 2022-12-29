#include <iostream>

using namespace std;

bool isPalindrome(string s){
    for(int i = 0; i < s.length()/2; i++){
        if(s[i] != s[s.length()-1-i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s, substr;
    cin >> s;
    int maxLength = 0;
    for(int i = 0; i < s.length(); i++){
        substr = s.substr(0, 1+i);
        if(!isPalindrome(substr)){
            if(maxLength < substr.length()){
                maxLength = substr.length();
            }
        }
    }
    cout << maxLength;
    return 0;
}