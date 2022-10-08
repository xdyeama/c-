#include <iostream>

using namespace std;

int main(){
    int x1, y1, x2, y2, x0, y0;
    cin >> x1 >> y1 >> x2 >> y2 >> x0 >> y0;
    if((x0 >= x1 && x0 <= x2) && (y0 >= y2 && y0 <= y1)){
        cout << "yes";
    }else{
        cout << "no";
    }

    return 0;
}