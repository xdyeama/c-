#include <iostream>
#include <set>
#include <map>


using namespace std;


int main(){
    int n, day; 
    string name;
    cin >> n;
    map<string, set<int> > m;
    for(int i = 0; i < n; i++){
        cin >> name >> day;
        m[name].insert(day);
    }
    for(pair<string, set<int> > p: m){
        if(p.second.size() >= 3){
            cout << p.first << " +1" << endl;
        }else{
            cout << p.first << " NO BONUS" << endl;
        }
    }
    return 0;
}