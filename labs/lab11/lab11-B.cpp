#include <iostream>
#include <set>

using namespace std;

int main(){
    int n, curr;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++){
        cin >> curr;
        s.insert(curr);
    }
    if(s.size() == n){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}