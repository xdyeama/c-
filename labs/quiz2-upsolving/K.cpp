#include <iostream>

using namespace std;

int main(){
    int n, t, count = 0;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    cin >> t;
    for(int i = 0; i < n; i++){
            if(t >= a[i]  & t <= b[i]){
                count++;
            }

    }
    cout << count;

    return 0;
}