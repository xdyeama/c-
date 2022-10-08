#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long int n;
    cin >> n;
    long long int num = 0;
    for(int i = 0; i <= n; i++){
        num = pow(2, i);
        cout << num << endl;
    }
    return 0;
}