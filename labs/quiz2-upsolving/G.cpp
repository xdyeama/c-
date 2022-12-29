#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, m, d;
    cin >> n >> m >> d;
    if(d > 0){
        for(int i = n; i <= m; i++){
            if(sqrt(i) == (int)sqrt(i)){
                cout << i << " ";
            }
        }
        return 0;
    }else{
        for(int i = m; i >= n; i--){
            if(sqrt(i) == (int)sqrt(i)){
                cout << i << " ";
            }
        }
        return 0;
    }
    return 0;
}