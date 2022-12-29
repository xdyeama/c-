#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPalindrome(string s){
    string::iterator forwardIt;
    string::reverse_iterator reverseIt = s.rbegin();
    for(forwardIt = s.begin(); forwardIt != s.end(); forwardIt++){
        if(*forwardIt != *reverseIt){
            return false;
        }
        reverseIt++;
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    do{
        if(isPalindrome(s)){
            cout << "ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    }while(next_permutation(s.begin(), s.end()));
    cout << "JOJO";
    return 0;
}