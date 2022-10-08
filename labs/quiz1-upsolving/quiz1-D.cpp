#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    for(int i = 2; i <= x; i++){
        if(x % i == 0){
            cout << i;
            return 0;
        }
    }
    return 0;
}