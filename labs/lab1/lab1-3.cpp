#include <iostream>
#include <bitset>

using namespace std;

/*
    12 1100 >> 1 0110
    resl 0000 0000 
    1: 0001 << 1 = 0010 = 2
    3 0011
    a & b
    a b   =  a ^ b
    1 1    =  0
    1 0    =1
    0 1      1
    0 0       0
    res = 000 0 ^ 1 = 1

    ^ XOR
    a
    res = 0 = 0000 
    0000 << 1 = 0000
    inp = 12 = 1100
    0 & 1 = 0
    1100 >> 1 = 0110

    res = 0 = 0000
    0000 << 1 = 0000
    inp = 0110 = 6
    0110 & 1 = 0
    0110 >> 1 = 0011

    res = 0000 
    0000 << 1 = 0000
    inp = 0011 = 3
    0011 & 1 = 1
    res = 0000
    0000 ^(xor) 1 = 0001
    0011 >> 1 = 0001

    res = 0001
    0001 << 1 = 0010
    inp = 0001
    0001 & 1 = 1
    res = 0010
    0010 ^ 1 = 0011
    inp = 0001
    0001 >> 1 = 0000 = 0
*/
int main()
{
    int inp;
    cin >> inp;
    int res;
    while (inp > 0)
    {
        res = res << 1;

        if (inp & 1 == 1)
        {
            res = res ^ 1;
        }
        inp = inp >> 1;
    }

    cout << res;

    return 0;
}