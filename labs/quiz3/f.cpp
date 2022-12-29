#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(((int)s[i] >= 48 && (int)s[i] <= 57) || ((int)s[i] >= 65 && (int)s[i] <= 90)){
            s.erase(i--, 1);
        }
    }
    cout << s;
    return 0;
}