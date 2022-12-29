#include <iostream>

using namespace std;

bool isTruth(string s){
    for(int i = 0; i < s.length(); i++){
        if((int)s[i] >= 48 && (int) s[i] <= 57){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    while(cin >> s){
        if(isTruth(s) == false){
            continue;
        }else{
            cout << s << endl;
        }
    }

    return 0;
}