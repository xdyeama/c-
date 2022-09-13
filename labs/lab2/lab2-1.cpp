#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n > 0){
        if(n % 2 == 0){
            cout << "Even" << endl;
        }
        else{
            cout << "Odd" << endl;
        }
    }else{
        cout << "None" << endl;
    }

    return 0;
}