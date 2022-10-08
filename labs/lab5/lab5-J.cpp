#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    int sLength = s.length();
    string firstHalf, secondHalf;
    if(sLength % 2 == 1){
        firstHalf = s.substr(0, s.length() / 2 + 1);
        secondHalf = s.substr(s.length() / 2 + 1, s.length());
        secondHalf = secondHalf + firstHalf[0];
        reverse(secondHalf.begin(), secondHalf.end());
        if(firstHalf == secondHalf){
            cout << "YES";
        }else{
            cout << "NO";
        }
        return 0;
    }else if(sLength == 2){
        cout << "YES";
        return 0;
    }
    else{
        firstHalf = s.substr(0, s.length() / 2);
        secondHalf = s.substr(s.length() / 2, s.length());
        reverse(secondHalf.begin(), secondHalf.end());
        if(firstHalf != secondHalf){
            cout << "NO";
            return 0;
        }else{
            cout << "YES";
            return 0;
        }
    }
    reverse(secondHalf.begin(), secondHalf.end());
    cout << firstHalf << endl;
    cout << secondHalf + firstHalf[0]<< endl;

    return 0;
}