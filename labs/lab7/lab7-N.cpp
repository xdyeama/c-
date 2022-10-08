#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int isCheater(vector<int> arr, int n, int k, int i){
    if( i == n - 1){
        if(arr[i] - arr[i-1] <= k){
            return 1;
        }else{
            return 0;
        }
    }
    if(arr[i] - arr[i-1] <= k){
        return 1 + isCheater(arr, n, k, i+1);
    }
    return isCheater(arr, n, k, i+1);
}
int main(){
    int n, k, curr;
    cin >> n >> k;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> curr;
        arr.push_back(curr);
    }
    sort(arr.begin(), arr.end());
    int count = isCheater(arr, n, k, 1);
    if(count > 0){
        cout << "cheater";
    }else{
        cout << "no";
    }
    return 0;
}