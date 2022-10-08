#include <iostream>

using namespace std;

int** transposeMatrix(int n, int m, int **arr){
    int** transposeArray = 0;
    transposeArray = new int*[m];
    
    for(int i = 0; i < m; i++){
        transposeArray[i] = new int[n];
        for(int j = 0; j < n; j++){
            transposeArray[i][j] = arr[j][i];
        }
    }
    return transposeArray;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    int **arr;
    arr = new int *[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[m];
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int** arr1 = transposeMatrix(n, m, arr);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}