// Problem B. Chess
// Input file: standard input
// Output file: standard output
// Time limit: 1 second
// Memory limit: 256 megabytes
// Use Function. You have a chesstable. And coordinates of pieces. if pieces locates in this position print
// ’*’, else ’0’.
// Input
// You are given n coordinates. Each line contains string. First letter (A-H) - row, second number (1-8) -
// column.
// Output
// chesstable
#include <iostream>
#include <vector>

using namespace std;

char table[8][8];

void chess(string arr[], int n){
    string s;
    for(int i = 0; i < n; i++){
        s = arr[i];
        char r = s[0];
        char c = s[1];
        table[(int)r - 65][(int) c - 49] = '*';
    }
}


int main(){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            table[i][j] = '0';
        }
    }

    int n;
    cin >> n;
    string s;

    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> s;
        arr[i] = s;
    }
    chess(arr, n);
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout << table[i][j];
        }
        cout << endl;
    }
    return 0;
}

