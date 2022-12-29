#include <iostream>

using namespace std;

int main(){
    int m, n, x;
    cin >> m >> n;
    int arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    cin >> x;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(x < arr[i][j]){
                cout << "Penalty!";
                return 0;
            }
        }
    }
    cout << "No penalty for today.";
    return 0;
}