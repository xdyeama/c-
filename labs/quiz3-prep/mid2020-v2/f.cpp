// Problem F. ATTENDANCE AGAIN!
// Input file: standard input
// Output file: standard output
// Time limit: 1 second
// Memory limit: 256 megabytes
// Askar agay has a list of his students in PP2.
// He decided to take attendace during current practice.
// Askar agay has a list of students who are in practice right now.
// He wants to find students who missed the practice, as well as students who came to his practice from
// another group.
// Input
// In the first line given n - the number of students of Askar agay.
// In the second line given list of names of students
// In the third line given m - the number of students in current practice.
// In the fourth line given list of names of students of current practice.
// Output
// At first, print students name in ascending order, who missed practice, line by line.
// After, print names of students in ascending order, who came to practice from another group.

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    int n, m;
    string s;
    cin >> n;
    map<string, int> m1;
    map<string, int> m2;
    for(int i = 0; i < n; i++){
        cin >> s;
        m1[s]++;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> s;
        m2[s]++;
    }
    vector<string> v1;
    vector<string> v2;
    map<string, int>::iterator it1;
    map<string, int>::iterator it2;
    for(it1 = m1.begin(); it1 != m1.end(); it1++){
        s = it1 ->  first;
        if(m2.count(s) > 0){
            if(it1 -> second > m2[s]){
                int diff = it1 -> second - m2[s];
                for(int i = 0; i < diff; i++){
                    v1.push_back(s);
                }
            }
        }else{
            v1.push_back(s);
        }
    }
    for(it2 = m2.begin(); it2 != m2.end(); it2++){
        s = it2 -> first;
        if(m1.count(s) == 0){
            v2.push_back(s);
        }else{
            if(m2.count(s) > m1.count(s)){
                int diff = m2.count(s) - m1.count(s);
                for(int i = 0; i < diff; i++){
                    v2.push_back(s);
                }
            }
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    vector<string>::iterator it;
    cout << "Missed students:" << endl;
    for(it = v1.begin(); it != v1.end(); it++){
        cout << "- " << *it << endl;
    }
    cout << "Not in the group:" << endl;
    for(it = v2.begin(); it != v2.end(); it++){
        cout << "- " << *it << endl;
    }
    return 0;
}