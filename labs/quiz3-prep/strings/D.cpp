#include <iostream>

using namespace std;

bool Compare(string s1, string s2){
    return  s1 == s2;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    if(Compare(s1, s2)){
        cout << "yes";
    }else{
        cout << "no";
    }


    return 0;
}