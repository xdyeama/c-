#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    double n, att1, att2, final, credit, totalCredits = 0, totalGpa = 0, currGpa = 0;
    std::cin >> n;
    std::vector<std::vector<int> > vout;
    for(int i = 0; i < n; i++){
        std::vector<int> vin;
        std::cin >> att1 >> att2 >> final >> credit;
        if(att1 + att2 < 30 || final < 20){
            att1 = 0;
            att2 = 0;
            final = 0;
        }
        totalCredits += credit;
        vin.push_back(att1);
        vin.push_back(att2);
        vin.push_back(final);
        vin.push_back(credit);
        vout.push_back(vin);
    }
    

    for(int i = 0; i < vout.size(); i++){
        std::vector<int> vin = vout[i];
        currGpa = ((vin[0] + vin[1] + vin[2]) / 100.0) * vin[3];
        totalGpa += currGpa;
    }
    totalGpa /= totalCredits;
    std::cout << totalGpa;
    
    return 0;
}