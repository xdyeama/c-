#include <iostream>

using namespace std;

int main(){
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    if(x + y < a + b || a > x){
        cout << "No";
        return 0;
    }
    if( x - a >= b - y || (x == a && y == b)){
        cout << "Yes";
    }else{
        cout << "No";
    }


    return 0;
}