#include <iostream>

using namespace std;

int main(){
    int n, curr, sum = 0;
    cin >> n;
    int sums[n];
    for(int i = 0; i < n; i++){
        cin >> curr;
        while(curr > 0){
            sum += curr % 10;
            curr /= 10;
        }
        sums[i] = sum;
        sum = 0;
    }
    for(int i = 0; i < n; i++){
        if(sums[i] % 2 == 0){
            cout << "Sum of digits is even!" << endl;
        }else{
            cout << "Sum of digits is odd!" << endl;
        }
    }

    return 0;
}