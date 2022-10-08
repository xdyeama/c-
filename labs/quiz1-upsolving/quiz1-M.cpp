#include <iostream>

using namespace std;

int main(){
    int n, a, d, sum = 0;
    cin >> n >> a >> d;
    for(int i = 0; i < n; i++){
        cout << a << " ";
        sum += a;
        a += d;
    }
    cout << endl;
    cout << "sum: " << sum;

    return 0;
}