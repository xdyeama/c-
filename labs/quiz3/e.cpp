#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        if((int)s[i] >= 48 && (int)s[i] <= 57){
            sum += (int)s[i] - 48;
        }
    }
    cout << sum;
    return 0;
}