#include <iostream>
#include <algorithm>

using namespace std;

string dexToHex(int n){
    string hex[6] = {"A", "B", "C", "D", "E", "F"};
    string hexNum = "";
    string currChar;
    int rem;
    while(n > 0){
        rem = n % 16;
        n/=16;
        if(rem >= 10){
            currChar = hex[rem-10];
            hexNum.append(currChar);
            continue;
        }
        currChar = to_string(rem);
        hexNum.append(currChar);
    }   
    reverse(hexNum.begin(), hexNum.end());
    return hexNum;
}

int main(){
    int n;
    cin >> n;
    cout << dexToHex(n);     
    return 0;
}