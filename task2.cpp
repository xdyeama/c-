#include <iostream>
#include <map>
#include <string>
#include <any>

using namespace std;

int main()
{
    bool isEven;
    int result;
    int comparisonNumber = 50;
    cout << "Is your number even?(0 for No or 1 for Yes)" << endl;
    cin >> isEven;
    for(int i = 0; i < 6; i++){
        bool isLessThan;
        cout << "Is your number is less or equal than " << comparisonNumber << " (0 for No or 1 for Yes)?" << endl;
        cin >> isLessThan;
        if(isLessThan == 1){
            comparisonNumber = comparisonNumber / 2;
        }else{
            comparisonNumber += comparisonNumber / 2;
        }
        result = comparisonNumber;
    }
    cout << "Your number is " << result;
}