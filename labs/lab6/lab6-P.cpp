#include <iostream>
#include <cmath>

using namespace std;

int convertToPositive(int n){
    return abs(n);
}

int main(){
    int n;
    cin >> n;
    int positiveNum = convertToPositive(n);
    cout << positiveNum;
    return 0;
}