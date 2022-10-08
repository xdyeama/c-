#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int secondHalf = (n % 10) * 10 + (n % 100 / 10);
    if(n / 100 == secondHalf){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}