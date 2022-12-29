#include <iostream>

using namespace std;

int main(){
    int n, curr;
    cin >> n;
    int countE = 0, countO = 0, sumE = 0, sumO = 0;
    if(n == 0){
        cout << "Left hand magic power: 0" << endl;
        cout << "Right hand magic power: 0" << endl;
        return 0;
    }
    for(int i = 0; i < n; i++){
        cin >> curr;
        if(curr % 2 == 0){
            countE++;
            sumE += curr;
        }else{
            countO++;
            sumO += curr;
        }
    }
    cout << "Left hand magic power: " << sumE * countE << endl;
    cout << "Right hand magic power: " << sumO * countO << endl;
    return 0;
}