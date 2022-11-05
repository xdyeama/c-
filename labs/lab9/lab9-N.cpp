#include <iostream>
#include <queue>
#include <stack>


int main(){
    long long n, curr, count = 0;
    std::cin >> n;
    std::queue<long long> q;
    std::stack<long long> s;
    std::stack<long long> s1;
    std::vector<long long> v;
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        q.push(curr);
        s.push(curr);
        v.push_back(curr);
    }
    s1 = s;
    std::vector<long long>::iterator it;
    while(!q.empty()){
        while(s.top() != q.front()){
            curr = s.top() ^ q.front();
            for(it = v.begin(); it != v.end(); it++){
                if(*it == curr){
                    count++;
                    break;
                }
            }
            s.pop();
        }
        s = s1;
        q.pop();
    }
    std::cout << count;
}