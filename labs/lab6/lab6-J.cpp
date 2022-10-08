#include <iostream>
#include <climits>

using namespace std;

int maxNum(int arr[4]){
    int max = INT_MIN;
    for(int i = 0; i < 4; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[4];
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    cout << maxNum(arr);

    return 0;
}