#include <iostream>

using namespace std;

bool isValid(int n){
    bool isValid = 1;
    while(n > 0){
        if((n % 10) % 2 == 1){
            isValid = 0;
        }
        n /= 10;
    }
    return isValid;
}

int main(){
    int n;
    cin >> n;
    bool isValidNum = isValid(n);
    if(isValidNum == 1){
        cout << "Valid";
    }else{
        cout << "Not valid";
    }
    return 0;
}