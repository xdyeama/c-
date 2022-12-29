#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string s;
    cin >> s;
    int dec = 0;
    for(int i = 0; i < s.length(); i++){
        dec += (s[s.length()-1-i] - 48) * pow(2, i);
    }
    cout << dec;
    return 0;
}