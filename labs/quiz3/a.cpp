#include <iostream>

using namespace std;

int main(){
    char c;
    string s;
    cin >> c >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == c){
            s.erase(i, 1);
            i--;
        }
    }
    cout << s;
    return 0; 
}