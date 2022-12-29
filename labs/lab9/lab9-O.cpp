#include <iostream>
#include <map>
#include <vector>

typedef std::pair<std::string, std::string> pair;


int main(){
    int n, i;
    int isLoginValid = 0;
    std::cin >> n;
    std::string l, p;
    std::vector<pair> vec;
    for(i = 0; i < n; i++){
        std::cin >> l >> p;
        vec.push_back(std::make_pair(l, p));
    }

    std::cin >> n;
    int errCodes[n];

    for( i = 0; i < n; i++){
        std::cin >> l >> p;

        for(int j = 0; j < vec.size(); j++){
            if(vec[j].first == l){
                isLoginValid = 1;
                if(vec[j].second != p){
                    isLoginValid = 2;
                    break;
                }
            }
        }
        errCodes[i] = isLoginValid;
        isLoginValid = 0;   
    }
     
    for(i = 0; i < n; i++){
        if(errCodes[i] == 0){
            std::cout << "login error   " << std::endl;
        }
        if(errCodes[i] == 1){
            std::cout << "correct password" << std::endl;
        }
        if(errCodes[i] == 2){
            std::cout << "password error" << std::endl;
        }
    }

    return 0;
}