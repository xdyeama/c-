#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s = "hello world";

    while(!s.empty()){
        s = s.substr(0, s.length() - 1);
        cout << s << endl;
    }
    int l = 3;
    int r = 6;
    // cout << s << endl;
    // reverse(s.begin() + l, s.begin() + r);
    // cout << s << endl;
    cout << s.empty();

    return 0;
}