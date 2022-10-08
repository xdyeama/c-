#include <iostream>
#include <string>

using namespace std;

string toBinary(int n){
    if(n == 0){
        return "0";
    }else if(n == 1){
        return "1";
    }else{
        return toBinary(n/2).append(to_string(n % 2));
    }
}

int main(){
    int n;
    cin >> n;
    cout << toBinary(n);
    return 0;
}