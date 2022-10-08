#include <iostream>

using namespace std;

int findSum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << findSum(n);

    return 0;
}