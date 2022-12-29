#include <iostream>

using namespace std;

char transformCap(char c){
    if(c >= 97 && c <= 122){
        return (char)(c - 32);
    }
    return (char)(c + 32);
}


int main(){
    char c;
    cin >> c;
    cout << transformCap(c);


    return 0;
}