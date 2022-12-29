#include <iostream>
using namespace std;

string toBin(int n){
    if(n == 0){
        return to_string(0);
    }
    if(n == 1){
        return to_string(1);
    }
    return toBin(n/2) + to_string(n%2);
    //return toBin(n/2).append(to_string(n % 2));
}

int main(){
    int n; 
    cin >> n;
    cout << toBin(n);
}