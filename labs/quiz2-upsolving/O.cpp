#include <iostream>

using namespace std;

int main(){
    int n, m, curr, sum = 0;
    cin >> n >> m;
    int avgs[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> curr;
            sum += curr;
        }
        avgs[i] = sum / m;
        sum = 0;
    }
    for(int i = 0; i < n; i++){
        cout << avgs[i] << " ";
    }
    return 0;
}