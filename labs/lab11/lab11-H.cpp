#include <iostream>

using namespace std;

class CeasarCipher{
    public:
        string s;
        int key;
        CeasarCipher(string initString, int k){
            s = initString;
            key = k;
        }

        string cipher(){
            string cipheredString = "";
            for(int i = 0; i < s.length(); i++){
                if((s[i] >= 65 && s[i] <= 90) && (s[i]+key > 90)){
                    cipheredString.push_back((char)(65 + (s[i]+key - 90 - 1)));
                    continue;
                }
                if((s[i] >= 97 && s[i] <= 122) && (s[i]+key > 122)){
                    cipheredString.push_back((char)(65 + (s[i]+key - 122 - 1)));
                    continue;
                }
                cipheredString.push_back((char)(s[i]+key));
            }
            return cipheredString;
        }
};


int main(){
    int key;
    string s;
    cin >> key;
    cin >> s;
    CeasarCipher cc(s, key);
    string res = cc.cipher();
    cout << res;
    return 0;
}