#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n, curr;
    string name;
    cin >> n;
    queue<string> q;
    for(int i = 0; i < n; i++){
        cin >> curr;
        if(curr == 1){
            cin >> name;
            q.push(name);
            cout << q.front() << endl;
        }
        if(curr == 2){
            q.pop();
            if(q.size() > 0){
                cout << q.front() << endl;
            }else{
                cout << "queue is empty" << endl;
            }
        }
    }

    return 0;
}