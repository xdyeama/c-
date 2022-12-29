#include <iostream>
#include <queue>


int main(){
    int n;
    std::cin >> n;
    std::string name;
    std::queue<std::string> q1;
    std::queue<std::string> q2;
    std::queue<int> q3;
    bool isRegistered = 0;
    getline(std::cin, name);
    /*
    q1.push(name);
    q2 = q1;
    q3.push(0);
    */
    for(int i = 0; i < n; i++){
        q2 = q1;
        getline(std::cin, name);
        while(!q2.empty()){ 
            if(q2.front() == name){
                isRegistered = 1;
                break;
            }
            q2.pop();
        }
        if(isRegistered == 0){
            q1.push(name);
            q3.push(0);
        }else{
            q3.push(1);
        }
        isRegistered = 0;
    }
    while(!q3.empty()){
        if(q3.front() == 0){
            std::cout << "new user added" << std::endl;
        }else{
            std::cout << "user already exists" << std::endl;
        }
        q3.pop();
    }
    

    return 0;
}