#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    char currChar = s[0], maxChar = s[0];
    int currLength = 1, maxLength = 1;
    for(int i = 0; i < s.length()-1; i++){
        while(s[i] == s[i+1]){
            currChar = s[i];
            currLength++;
            i++;
        }
        if(currLength > maxLength){
            maxLength = currLength;
            maxChar = currChar;
        }
        currLength = 1;
    }
    cout << maxChar << " " << maxLength;
    return 0;
}