#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    string s;
    cin >> s;
    char ch;
    cin >> ch;
    multimap<char, int> m;
    for(int i = 0; i < s.length(); i++){
        m.insert(make_pair(s[i], i));
    }
    multimap<char, int>::iterator it;
    if(m.count(ch) == 1){   
        it = m.find(ch);
        cout << it->second;
        return 0;
    }
    if(m.count(ch) > 1){
        vector<int> v;

        for(it = m.begin(); it != m.end(); it++){
            if( it -> first == ch){
                v.push_back(it -> second);
            }
        }
        cout << v[0] << " " << v[v.size()-1];
        return 0;
    }
    return 0;
}