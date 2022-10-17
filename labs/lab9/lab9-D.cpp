#include <iostream>
#include <stack>


int main(){
    int n, k, curr, count = 0;
    std::cin >> n >> k;
    std::stack<int> st;
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        st.push(curr);
    }
    for(int i = 0; i < n; i++){
        if(k == st.top()){
            count++;
        }
        st.pop();
    }

    std::cout << count;
    return 0;
}