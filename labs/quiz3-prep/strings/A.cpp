#include <iostream>

using namespace std;

bool isDigit(char c){
    if((int) c >= 48 && (int) c <= 57){
        return true;
    }
    return false;
}


int main(){
    char c;
    cin >> c;
    if(isDigit(c)){
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}