#include <iostream>

using namespace std;

int main(){
    int n, sum=0, prod=1;
    cin >> n;
    while(n > 0){
        sum += n % 10;
        prod *= n % 10;
        n /= 10;
    }
    cout << sum + prod;
    return 0;
}