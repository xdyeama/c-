#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, curr, temp;
    cin >> n;
    temp = n;
    bool isLucky = true;
    map<int, int> m;
    while(temp > 0){
        m[temp%10]++;
        temp /= 10;
    }
    temp = n;
    map<int, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if(it -> first != 4 || it -> first != 7 ){
            isLucky = false;
            break;
        }
    }
    while(isLucky != true){
        temp++;
        m1

    }

}