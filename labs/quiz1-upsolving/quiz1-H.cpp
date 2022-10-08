#include <iostream>

using namespace std;

int main(){
    int n, m, b;
    cin >> n >> m >> b;
    if(b > (n+m)/10.0){
        cout << "Boris, you are punished!";
    }else{
        cout << "You are my sweet baby";
    }
    return 0;
}