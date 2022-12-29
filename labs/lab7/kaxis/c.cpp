#include <iostream>
using namespace std;

int main(){
    string n, m = "";
    for(int i = 0; i < 9; i++){
        cin >> n;
        m.append(n);
        m.append(" ");
    }
    cout << m;
    
}