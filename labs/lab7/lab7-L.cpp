#include <iostream>

using namespace std;

int isPalindrome(string s){
    if(s.length() == 1){
        return 1;
    }
    if( (int) s[0] != (int) s[s.length() - 1]){
        return -1;
    }
    return isPalindrome(s.substr(1, s.length() - 2));

}

int main(){
    string s;
    cin >> s;
    int res = isPalindrome(s);
    if(res == 1){
        cout << "Yes";
    }
    if(res == -1){
        cout << "No";
    }
    return 0;
}