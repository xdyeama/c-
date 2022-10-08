#include <iostream>

using namespace std;

bool isTicketLucky(int n){
    int sum = 0;
    int lastNumeral = n % 10;
    bool isLucky = 1;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    if(sum % lastNumeral == 0){
        isLucky = 1;
    }else{
        isLucky = 0;
    }
    return isLucky;
}

int main(){
    int n;
    cin >> n;
    bool isLucky = isTicketLucky(n);
    if(isLucky == 1){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}