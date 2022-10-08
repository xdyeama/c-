#include <iostream>

using namespace std;

unsigned long long findSum(string s){
    if (s.length() == 1){
        return (int) s[s.length() - 1] - 48;
    }
    return ((int) s[s.length() - 1] - 48) + findSum(s.substr(0, s.length() - 1));
}

int main(){
    string s;
    cin >> s;
    unsigned long long sum = findSum(s);
    cout <<  sum;
    return 0;
}