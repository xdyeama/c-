#include <iostream>

using namespace std;

class CeasarCipher{
    public:
        string s;
        int key;
        CeasarCipher(string initString){
            s = initString;
        }

        string cipher(){
            string cipheredString = "";
            for(int i = 0; i < s.length(); i++){
                if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)){
                    if((s[i] >= 65 && s[i] <= 90) && (s[i]+1 > 90)){
                        cipheredString.push_back((char)(65 + (s[i]+1 - 90 - 1)));
                        continue;
                    }
                    if((s[i] >= 97 && s[i] <= 122) && (s[i]+1 > 122)){
                        cipheredString.push_back((char)(97 + (s[i]+1 - 122 - 1)));
                        continue;
                    }
                    cipheredString.push_back((char)(s[i]+1));
                    continue;
                }
                cipheredString.push_back(s[i]);
            }
            return cipheredString;
        }
};


int main(){
    string s;
    getline(cin, s);
    CeasarCipher cc(s);
    string res = cc.cipher();
    cout << res;
    return 0;
}