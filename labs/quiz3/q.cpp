#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    string curr;
    vector<string> v;
    for(int i = 0; i < n; i++){
        cin >> curr;
        if(curr.find("@gmail.com") != string::npos){
            v.push_back(curr.substr(0, curr.find("@gmail.com")));
        }
    }
    vector<string>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }
    return 0;
}