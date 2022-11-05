#include <iostream>
#include <algorithm>


int main(){
    std::string s, rev;
    std::cin >> s;
    std::string s1 = s;
    int i = 0, currMax = 0, maxLength = 0;
    while(s1.length() > 0){
        rev = s1;
        std::reverse(rev.begin(), rev.end());
        if(s == rev){
            maxLength = s1.length();
            break;
        }   
        s1.substr(0, s1.length() - i - 1);
        i++;
    }
    i = 0;
    s1 = s;
    while(s1.length() > 0){
        rev = s1;
        std::reverse(rev.begin(), rev.end());
        if(s1 != rev){
            currMax = s1.length();
        }
        if(currMax >= maxLength){
            maxLength = currMax;
            break;
        }
        s1.substr(i, s1.length() - i - 1);
        i++;
    }
    std::cout << maxLength;
    return 0;
}