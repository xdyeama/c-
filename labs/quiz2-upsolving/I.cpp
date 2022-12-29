#include <iostream>

using namespace std;

int main(){
    int n, currMax = 0;
    cin >> n;
    int arr[n][n];
    int maxs[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(currMax < arr[i][j]){
                currMax = arr[i][j];
            }
        }
        maxs[i] = currMax;
        currMax = 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = maxs[i];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}