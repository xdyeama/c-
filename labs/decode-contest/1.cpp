#include <iostream>

using namespace std;

int main(){
    int n, a, b, c, x, y, d;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c >> x >> y;
        d = c;
        if( a + c < x){
            arr[i] = 0;
            cout << "NO" << endl;

            continue;
        }
        if(a < x){
            d = c - a;
        }
        if( a + c >= x && b + d >= y){
            arr[i] = 1;
        }else{
            arr[i] = 0;
        }       
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}