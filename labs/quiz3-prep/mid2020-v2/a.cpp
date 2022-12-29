// Problem A. Banknotes

// Yernur has n banknotes. His friend Arystan asks him q times how many banknotes he has with value of
// exactly t. Help Yernur to answer on friend’s questions.

// Input
// The first line of input contains an integer n (1 ≤ n ≤ 105
// ). The second line contains n space-separated
// integers - values of banknotes (1 ≤ ai ≤ 109
// ). The third line contains a single integer q - number of
// Arystan’s queries (1 ≤ q ≤ 105
// ). The next q lines contain a single integer t - asked value of banknote.
// Output
// For each of q query you should output one integer k (number of banknotes with value of exactly t) on a
// single line
#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;


int main(){
    int n, m, curr, s;
    cin >> n;
    map<int, int> map1;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> curr;
        map1[curr]++;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> curr;
        if(map1.count(curr) > 0){
            v.push_back(map1[curr]);
            continue;
        }
        v.push_back(0);
    }
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }

    return 0;
}