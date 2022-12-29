#include <iostream>
#include <map> 


using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    map<string, int> m;
    for(int i = 0; i < n; i++){
        cin >> s;
        m[s]++;
    }
    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if(it -> second > 1){
            cout << it -> first << endl;
        }
    }

    return 0;
}