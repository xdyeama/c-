#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, j;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + sizeof(arr) - 1);
    j = sizeof(arr) - 1;
    for(int i = 0; i < n; i++){
        while(arr[i] != 0 && arr[j] != 0){
            
        }
    }
    return 0;
}