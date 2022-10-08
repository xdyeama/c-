#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n, curr;
    cin >> n;
    set<int> s; 
    for(int i = 0; i < n; i++){
        cin >> curr;
        if(curr % 2 == 1){
            s.insert(curr);
        }
    }

    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    return 0;
}