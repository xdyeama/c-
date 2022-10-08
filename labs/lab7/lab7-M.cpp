#include <iostream>

using namespace std;

int printRec(unsigned long long n, unsigned long long i){
    if(i == n){
        cout << n;
        return n;
    }
    cout << i << " ";
    return printRec(n, i + 1);
}

int main(){
    unsigned long long n;
    cin >> n;
    int res = printRec(n, 1);
    return 0;
}