#include <iostream>

using namespace std;

int main()
{
    int age;
    int num;
    cin >> age >> num;
    int num1 = num / 100;
    int num2 = num % 10;

    cout << age + num1 + num2;
    return 0;
}