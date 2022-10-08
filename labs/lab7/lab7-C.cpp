#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int binarySearch(int arr[], int target, int left, int right){
    if(right >= left){
        int middle = left + ((right - left) / 2);

        if( arr[middle] == target){
            return middle;
        }
        if(arr[middle] > target){
            return binarySearch(arr, target, left, middle - 1);
        }
        return binarySearch(arr, target, middle + 1, right);
    }
    return -1;
}

int main(){ 
    int n, target = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> target;
    int index = binarySearch(arr, target, 0, n-1);
    if(index == -1){ 
        cout << "No";
    }else{
        cout << "Yes";
    }

    return 0;
}