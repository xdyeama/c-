#include <iostream>
using namespace std;

int dOt(int n){
    if (n == 0){
        return 1;
    }else{
        return (dOt(n-1)*2);
    }
}

int main(){
    int n; cin >> n;
    cout << dOt(n);
}