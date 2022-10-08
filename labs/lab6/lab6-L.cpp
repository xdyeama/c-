#include <iostream>

using namespace std;

bool isStringValid(string s, int n){
    bool isValid = 0;
    int count = 0;
    bool isRunning = 0;

    for(int i = 0; i < s.size(); i++){
        if((int) s[i] >= 48 && (int) s[i] <= 57 && n == 1){
            isValid = 1;
        }
        while(((int) s[i] >= 48 && (int) s[i] <= 57)){
            count++;
            i++;
        }
        if(count >= n){
            isValid = 1;
        }else{
            count = 0;
        }
    }
    return isValid;
}


int main(){
    string s;
    int n;
    cin >> s >> n;
    bool isValid = isStringValid(s, n);
    if(isValid == 1){
        cout << "Valid";
    }else{
        cout << "Not valid";
    }
    return 0;
}