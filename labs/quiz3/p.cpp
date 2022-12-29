#include <iostream>


using namespace std;

string strToBool(string s){
    if(s == "0"){
        return "false";
    }
    if(s == "1"){
        return "true";
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    cout << strToBool(s);

    
    return 0;
}