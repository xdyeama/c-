#include <iostream>

using namespace std;

int numEven(string s){
    if(s.length() == 1){
        if((int) s[s.length()-1] % 2 == 0){
            return 1;
        }else{
            return 0;
        }
    }
    if((int) s[s.length()-1] % 2 == 0){
        return 1 + numEven(s.substr(0, s.length()-1));
    }
    return numEven(s.substr(0, s.length()-1));
}

int main(){ 
    string s;
    cin >> s;
    int count = numEven(s);
    cout << count;
    return 0;
}