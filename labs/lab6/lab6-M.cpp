#include <iostream>
#include <algorithm>

using namespace std;

void printReverse(int arr[], int n){
    for(int i = n-1; i >= 0; i--){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    printReverse(arr, n);
    return 0;
}