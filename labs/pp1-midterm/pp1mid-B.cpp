#include <iostream>


int main(){
    std::string s;
    std::cin >> s;
    std::string astana = "8717";
    std::string almaty1 = "87272";
    std::string almaty2 = "87273";
    if(s.find(astana) != -1){
        std::cout << "Astana";
    }
    if(s.find(almaty1) != -1 || s.find(almaty2) != -1){
        std::cout << "Almaty";
    }
    return 0;
}