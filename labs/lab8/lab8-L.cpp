#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n, curr;
    vector<int> vec;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++){
        cin >> curr;
        // vec.push_back(curr);
        s.insert(curr);
    }

    set<int> s(vec.begin(), vec.end()); 
    cout << s.size();

    return 0;
}