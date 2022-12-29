#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int small[26];
int capital[26];


int main(){
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    char currChar;
    char target[n];
    for(int i = 0; i < n; i++){
        cin >> currChar;
        if(currChar == ' '){
            i--;
            continue;
        }
        target[i] = currChar; 
    };
    sort(target, target + sizeof(target));
    for(int i = 0; i < s.length(); i++){
        if((int)s[i] >= 97 && (int)s[i] <= 122){
            small[(int)s[i]-97]++;
        }
        if((int)s[i] >= 65 && (int)s[i] <= 90){
            capital[(int)s[i]-65]++;
        }
    }
    for(int i = 0; i < n; i++){
        if((int)target[i] >= 97 && (int)s[i] <= 122){
            cout << target[i] << " - " << small[target[i] - 97] << endl;
        }else{
            cout << target[i] << " - " << capital[target[i]-65] << endl;
        }
    }


    return 0;
}