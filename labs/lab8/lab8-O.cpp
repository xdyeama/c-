#include <iostream>
#include <set>

using namespace std;

int main(){
    string str;
    cin >> str;
    set<int> s; 
    for(int i = 0; i < str.length(); i++){
        if((int) str[i] >= 64 && (int) str[i] <= 90){
            s.insert((int) str[i] + 32);
        }else{
            s.insert((int) str[i]);
        }
    }

    set<int>::iterator it;
    cout << s.size() << endl;
    for(it = s.begin(); it != s.end(); it++){
        cout << char(*it) << " ";
    }
    return 0;
}