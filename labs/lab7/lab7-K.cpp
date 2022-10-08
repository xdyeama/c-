#include <iostream>

using namespace std;

int findMax(string s, int currMax){
    if(s.length() == 1){
        if((int) s[0] - 48 > currMax){
            return (int) s[0] - 48;
        }
        return currMax;
    }
    if((int) s[0] - 48 > currMax){
        return findMax(s.substr(1, s.length() - 1), (int) s[0] - 48);
    }
    return findMax(s.substr(1, s.length() - 1), currMax);
}

int main(){
    string s;
    cin >> s;
    int currMax = 0;
    int max = findMax(s, currMax);
    cout << max;
    return 0;
}