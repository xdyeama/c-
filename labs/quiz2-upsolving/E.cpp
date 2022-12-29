#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int first = (int)s[0] - 48;
    int sum = 0;
    for(int i = 1; i < s.length(); i++){
        sum += (int)s[i] - 48;
    }
    sum = sum % 10;
    if(first == sum){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}