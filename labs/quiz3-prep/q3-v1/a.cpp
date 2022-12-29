#include <iostream>

using namespace std;

int findPrime(int n){
    int count = 1;
    int curr = 3;
    bool isPrime = true;
    while(count < n){
        for(int i = 2; i < curr; i++){
            if(curr % i == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime == true){
            count++;
        }
        curr++;
        isPrime = true;
    }
    return curr;
}


int main(){
    int n;
    cin >> n;
    cout << findPrime(n);
    return 0;
}