#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i*i <= n; i++){
        if(pow(i, 2) == n){
            cout << "Perfecto";
            return 0;
        }
    }
    cout << "Simple";
    return 0;
}