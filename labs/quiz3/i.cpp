#include <iostream>
#include <set>

using namespace std;

int main(){
    string s, s1, ch;
    getline(cin, s);
    getline(cin, s1);
    cin >> ch;
    set<char> set1;
    for(int i = 0; i < s1.length(); i++){
        set1.insert(s1[i]);
    }
    set<char>::iterator it;
    for(int i = 0; i < s.length(); i++){
        for(it = set1.begin(); it != set1.end(); it++){
            if(s.find(*it) != string::npos){
                s.replace(s.find(*it), 1, ch);
            }
        }
    }
    cout << s;
    return 0;
}