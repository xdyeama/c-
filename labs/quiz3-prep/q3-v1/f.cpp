#include <iostream>

using namespace std;

void factorize(int n) {
    int i = 2;
    while(n > 1){
        if(n % i == 0){
            cout << i << " ";
            n /= i;
        }else{
            i++;
        }
    }
}


int main(){
    int n;
    cin >> n;
    factorize(n);

    return 0;
}