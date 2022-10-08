#include <iostream>

using namespace std;

unsigned long long fact(unsigned long long n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fact(n-1);
}


int main(){
    unsigned long long n;
    cin >> n;
    unsigned long long res = fact(n);
    cout << res;
    return 0;
}