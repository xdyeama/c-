#include <iostream>
#include <string>
#include <sstream>


using namespace std;

string transformString(string s){
    stringstream ss;
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0 && (int) s[i] >= 97 && (int) s[i] <= 122){
            s[i] = (char)((int) s[i] - 32);
        }
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    string res = transformString(s);
    cout << res;

    return 0;
}