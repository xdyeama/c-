#include <iostream>

using namespace std;

bool isTasty(string s){
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        sum += (int)s[i];
    }
    if(sum <= 300){
        return false;
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    if(isTasty(s)){
        cout << "It is tasty!";
    }else{
        cout << "Oh, no!";
    }
    return 0;
}