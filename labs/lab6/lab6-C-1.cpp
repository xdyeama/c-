#include <iostream>
#include <algorithm>

using namespace std;

int countA[101];
int countB[101];

int findNumSame(int arr1[], int arr2[],int n){
    int countSame = 0;
    for(int i = 0; i < n; i++){
        countA[arr1[i]]++;
    }
    for(int i = 0; i < n; i++){
        countB[arr2[i]]++;
    }
    for(int i = 0; i < sizeof(countA); i++){
        if(countA[i] != 0 && countB[i] != 0){
            countSame += min(countA[i], countB[i]);
        }
    }
    return countSame;
}

int main(){
    int n, curr;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }

    int countSame = findNumSame(arr1, arr2, n);
    cout << countSame;

    return 0;
}