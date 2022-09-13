#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    cout << "The next number for the number " << num << " is " << ++num << ".\n"
         << "The previous number for the number " << --num << " is " << --num << ".";

    return 0;
}