#include <iostream>

using namespace std;

char toUpperCase(char ch){
    if((int) ch >= 97 && (int) ch <= 122){
        ch = (char) ((int) ch - 32);
    }
    return ch;
}

int main(){
    char ch;
    cin >> ch;
    cout << toUpperCase(ch);
    return 0;
}