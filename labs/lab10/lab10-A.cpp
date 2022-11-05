#include <iostream>
#include <vector>
#include <algorithm>

bool compareNames(std::string l, std::string r){
    return l < r;
}
bool compareGrades(int l, int r){
    return (l < r);
}

int main(){
    int n, grade;
    std::string name;
    std::cin >> n;
    std::vector<std::string> names;
    std::vector<int> grades;
    for(int i = 0; i < n; i++){
        std::cin >> name >> grade;
        names.push_back(name);
        grades.push_back(grade);
    }

    std::sort(names.begin(), names.end(), compareNames);
    std::sort(grades.begin(), grades.end(), compareGrades);

    for(int i = 0; i < n; i++){
        std::cout << names[i] << " " << grades[i] << std::endl;
    }

    return 0;
}