#include <iostream>
#include <map>
#include <vector>

using namespace std;



int main(){
    int n;
    cin >> n;
    vector<map<char, int> > v;
    for(int i = 0; i < n; i++){
        string curr;
        cin >> curr;
        map<char, int> m;
        for(int j = 0; j < curr.length(); j++){
            m[curr[j]]++;
        }
        v.push_back(m);
    }
    bool isPresent = false;
    for(char ch = 'a'; ch <= 'z'; ch++){
        bool flag = true;
        for(auto m: v){
            if(m[ch] == 0){
                flag = false;
            }
        }
        if(flag){
            cout << ch << " ";
            isPresent = true;
        }
    }
    if(!isPresent){
        cout << "NO COMMON CHARACTERS";
    }
    return 0;
}