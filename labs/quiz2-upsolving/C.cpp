#include <iostream>

using namespace std;


int main(){
    int n, curr, i1 = 0, i2 = 0, countEven = 0, countOdd = 0;
    cin >> n;
    int allCards[n];

    for(int i = 0; i < n; i++){
        cin >> curr;
        allCards[i] = curr;
        if(curr % 2 == 0){
            countEven++;
        }else{
            countOdd++;
        }
    }
    int evenCards[countEven];
    int oddCards[countOdd];

    for(int i = 0; i < n; i++){
        if(allCards[i] % 2 == 0){
            evenCards[i1] = allCards[i];
            i1++;
        }else{
            oddCards[i2] = allCards[i];
            i2++;
        }
    }
    i1 = 0;
    i2 = 0;
    for(int i = 0; i < n; i++){
        if(i < countEven){
            allCards[i] = evenCards[i1];
            i1++;
        }else{
            allCards[i] = oddCards[i2];
            i2++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << allCards[i] << " ";
    }


    return 0;   
}