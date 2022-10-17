#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n1, n2;
    cin >> n1;
    int arr1[n1];
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }
    cin >> n2;
    int arr2[n2];
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }
    int n3 = n1 + n2;
    int arr3[n3];
    for(int i = 0; i < n3; i++){
        if(i < n1){
            arr3[i] = arr1[i];
        }else{
            arr3[i] = arr2[i-n1];
        }
    }
    sort(arr3, arr3 + n3);
    for(int i = 0; i < n3; i++){
        cout << arr3[i] << " ";
    }
    return 0;
}