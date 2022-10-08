#include <iostream>

using namespace std;

int isPower(unsigned long long n){
    if( n > 2 && n % 2 == 1){
        return -1;
    }
    if( n == 2 || n == 1){
        return 0;
    }
    return isPower(n/2);
}

int main(){
    unsigned long long n;
    cin >> n;
    int res = isPower(n);
    if(res == -1){
        cout << "No";
    }
    if(res == 0){
        cout << "Yes";
    }

    return 0;
}