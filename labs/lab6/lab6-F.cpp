#include <iostream>
#include <string.h>


using namespace std;

int countNums(string s){
    char c;
    int count = 0;
    for(int i = 0; i < s.length();i++){
        c = s[i];
        if((int) c >=  48 && (int) c <= 57){
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    int n;
    cin >> s >> n;
    int count = countNums(s);
    if(count >= n){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}