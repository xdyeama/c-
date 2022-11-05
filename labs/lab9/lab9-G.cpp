#include <iostream>
#include <queue>

int main(){
    std::string s;
    std::cin >> s;
    std::queue<int> q1;
    std::queue<int> q2;
    std::queue<int> q3;
    for(int i = 0; i < s.length(); i++){
        q1.push((int)s[i] - 48);
    }
    q2 = q1;
    q2.pop();
    int n1, n2;
    while(!q2.empty()){
        n1 = q1.front();
        n2 = q2.front();
        if(n1 == 1 && n2 == 1){
            q1.pop();
            q2.pop();
        }else{
            q3.push(n1);
            q1.pop();
            q2.pop();
        }
    }
    q3.push(q1.front());

    int curr;
    while(!q3.empty()){
        curr = q3.front();
        std::cout << curr;
        q3.pop();
    }
    return 0;
}
