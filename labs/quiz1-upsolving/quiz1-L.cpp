#include <iostream>

using namespace std;

int main(){
    int salary, savings = 0, target = 500000, numMonth = 0;
    cin >> salary;
    while(savings < target){
        savings += 0.3 * salary;
        salary *= 1.1;
        numMonth += 1;
    }
    cout << numMonth;

    return 0;
}