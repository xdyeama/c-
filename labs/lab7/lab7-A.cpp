#include <iostream>

using namespace std;

int powerOfTwo(int n){
    if(n == 0){
        return 1;
    }else{
        int power = powerOfTwo(n-1);
        return power * 2;
    }
}

int main(){
    int n;
    cin >> n;
    int res = powerOfTwo(n);
    cout << res;
    return 0;
}