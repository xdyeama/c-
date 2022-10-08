#include <iostream>

using namespace std;

int main(){
    int n, total = 0, max = 0, curr;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> curr;
        total += curr;
        if(curr > max){
            max = curr;
        }
    }
    cout << total << "  " << max;

    return 0;
}