#include <iostream>

int main(){
    char c;
    std::string s;
    std::cin >> c >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == c){
            s.erase(i,1);
        }
    }
    std::cout << s;
    return 0;
}