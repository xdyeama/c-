#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool customComparator(int l, int r){
    return l > r;
}

int main(){
    int n, curr, mode = 0, modeNum;
    cin >> n;
    map<int, int> m;
    vector<int> modes;
    for(int i = 0; i < n; i++){
        cin >> curr;
        m[curr]++;
    }
    map<int, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if(it -> second > mode){
            mode = it -> second;
        }
    }
    for(it = m.begin(); it != m.end(); it++){
        if(it -> second == mode){
            modes.push_back(it->first);
        }
    }
    sort(modes.begin(), modes.end(), customComparator);
    vector<int>::iterator itr;
    for(itr = modes.begin(); itr != modes.end(); itr++){
        cout << *itr << " ";
    }
    return 0;
}