#include <iostream>

using namespace std;

// Fibonacci sequence
// 0 1 1 2 3 5 8 13 21 

int nthFibonacci(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    return nthFibonacci(n-1) + nthFibonacci(n-2);
}

int main(){
    int n;
    cin >> n;
    int res = nthFibonacci(n);
    cout << res;
    return 0;
}