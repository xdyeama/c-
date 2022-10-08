#include <iostream>

using namespace std;

int main(){
    double x, y;
    cin >> x >> y;
    int countDays = 1;
    while(x < y){
        x *= 1.1;
        countDays++;
    }
    cout << countDays;

    return 0;
}