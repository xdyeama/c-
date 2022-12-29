#include <iostream>

using namespace std;

int main(){
    int n, min = 9, max = 0;
    cin >> n;
    while(n > 0){
        if(n % 10 > max){
            max = n % 10;
        }
        if(n % 10 < min){
            min = n % 10;
        }
        n /= 10;
    }  
    cout << max << " " << min;

    return 0;
}