#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    string outString = "";
    for(int i = 0; i < s.length(); i++){
        if(((int)s[i] >= 65 && (int)s[i] <= 90) || ((int)s[i] >= 97 && (int)s[i] <= 122)){
            outString.push_back(s[i]);
        }
    }
    cout << outString;
    return 0;
}