// Problem G. First big boss
// Input file: standard input
// Output file: standard output
// Time limit: 1 second
// Memory limit: 256 megabytes
// There was problem in 18th century to choose boss for organized crime groups, and they decided to choose
// first boss on the list
// Input
// The first line contains string s
// Output
// Output first oncoming capital letter, else return -1

#include <iostream>

using namespace std;

char bigBoss(string s){
        if((int)s[0] >= 65 && (int)s[0] <= 90){
            return s[0];
        }
    if(s.length() > 1){
        return bigBoss(s.substr(1, s.length()-1));
    }else{
        return -1;
    }
}

int main(){
    string s;
    cin >> s;
    if((int)bigBoss(s) >= 65 && (int)bigBoss(s) <= 90){
        cout << bigBoss(s);
    }else{
        cout << -1;
    }
    return 0;
}