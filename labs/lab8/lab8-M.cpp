#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
    int n, curr, sum = 0;
    cin >> n;
    unordered_set<int> s; 
    for(int i = 0; i < n; i++){
        cin >> curr;
        s.insert(curr);
    }

    unordered_set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++){
        sum += *it;
    }
    cout << sum;
    return 0;
}