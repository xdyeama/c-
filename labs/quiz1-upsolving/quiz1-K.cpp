#include <iostream>

using namespace std;

int main(){
    int n, numStops = 0;
    cin >> n;
    while(n > 0){
        if(numStops % 7 != 0){
            if(numStops % 2 == 1){
                n += 3;
            }
            if(numStops % 2 == 0){
                n -= 4;
            }
        }
        numStops++;
    }
    cout << numStops;

    return 0;
}