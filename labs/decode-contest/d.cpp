#include <iostream>

using namespace std;

int main(){
    int t, a, b, count = 0;
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        while(a % b != 0){
            a++;
            count++;
        }
        arr[i] = count;
        count = 0;
    }
    for(int i = 0; i < t; i++){
        cout << arr[i] << endl;
    }
    return 0;
}