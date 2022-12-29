#include <iostream>

using namespace std;

int powerOfTwo(int n){
    if(n == 0){
        return 1;
    }
    return powerOfTwo(n-1) * 2;
}
// powerOfTwo(4) -> powerOfTwo(3)
// powerOfTwo(3) -> powerOfTwo(2)
// powerOfTwo(2) -> powerOfTwo(1)
// powerOfTwo(1) -> powerOfTwo(0)
// powerOfTwo(0) -> 1

// stack memory
// powerOfTwo(0) -> 1
// powerOfTwo(1) -> 2
// powerOfTwo(2) -> 4
// powerOfTwo(3) -> 8
// powerOfTwo(4) -> 16

int main(){
    int n;
    cin >> n;
    int res = powerOfTwo(n);
    cout << res;
    return 0;
}