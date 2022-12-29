#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    string s1 = "", s2 = "", curr;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n/2; i++){
        curr = to_string(arr[i]);
        s1.append(curr);
    }
    for(int i = n-1; i >= n/2; i--){
        curr = to_string(arr[i]);  
        reverse(curr.begin(), curr.end());
        while((int)curr[0] - 48 == 0){
            curr = curr.substr(1, curr.length()-1);
        }
        s2.append(curr);
    }

    if(s1 == s2){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}