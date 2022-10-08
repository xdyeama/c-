#include <iostream>

using namespace std;

int findSum(unsigned long long n){
    if(n < 10){
        return n / 2;
    }
    return (n % 10) / 2 + findSum(n / 10);
}

int main(){
    unsigned long long n;
    cin >> n;
    int sum = findSum(n);
    cout << sum;
    return 0;
}