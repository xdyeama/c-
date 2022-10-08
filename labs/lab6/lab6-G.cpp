#include <iostream>

using namespace std;

string eraseVowels(string curr){
    int vowelCodes[5] = { 65, 69, 73, 79, 85 };
    for(int i = 0; i < curr.size(); i++){
        for(int j = 0; j < 5; j++){
                if((int) curr[i] == vowelCodes[j] || (int) curr[i] == vowelCodes[j] + 32){
                    curr.erase(curr.begin() + i);
                    // countErased++;
                    i--;
                }
            }
    }
    return curr;
}

int main(){
    string curr;
    getline(cin, curr);
    curr = eraseVowels(curr);
    cout << curr;
    return 0;

}