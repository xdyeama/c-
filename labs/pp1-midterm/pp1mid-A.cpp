#include <iostream>
#include <cmath>

int absolute(int x, int y){
    return abs(x-y);
}

int main(){
    int x, y;
    std::cin >> x >> y;
    std::cout << absolute(x, y);
    return 0;
}