// Problem C. Calculator v2.
// Input file: standard input
// Output file: standard output
// Time limit: 1 second
// Memory limit: 256 megabytes
// Your are given some operator, 2 variables and their value, you have to make calculation using 3 operators
// +-*. You have to make pair variable and value. Use FUNCTION int f1(with some params) to calculate
// result.
// Input
// The first line contains integer N size of operations where 1 ≤ N ≤ 50 . Second line contains N-times
// (operator, variable1 and value1, variable2 and value2)
// Output
// Output must be in this format -> a + b = 2. HINT: map<string, int>

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    int n, val1, val2;
    char var1, var2, op;
    cin >> n;
    vector<pair<char, int> > v;
    vector<char> ops;
    for(int i = 0; i < n; i++){
        cin >> op;
        cin >> var1;
        cin >> val1;
        cin >> var2;
        cin >> var2;
        ops.push_back(op);
        v.push_back(make_pair(var1, val1));
        v.push_back(make_pair(var2, val2));
    }
    vector<pair<char, int> >::iterator it;
    string expr = "";
    int res;
    int i = 0;
    map<string, int> m;
    for(it = v.begin(); it != v.end(); it += 2){
        var1 = it -> first;
        val1 = it -> second;
        var2 = (it + 1) -> first;
        val2 = (it + 1) -> second;
        op = ops[i];
        i++;
        expr = to_string((char)var1).append(" ").append(to_string((char)op)).append(" ").append(to_string((char)var2));
        res = val1 + val2;
        m.insert(make_pair(expr, res));
    }
    map<string, int>::iterator it1;
    for(it1 = m.begin(); it1 != m.end(); it1++){
        expr = it1 -> first;
        res = it1 -> second;
        cout << expr + " = " + to_string((char) res) << endl;
    }


    return 0;
}