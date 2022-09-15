#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> primes;
    int isPrime = 0;
    primes.emplace_back(2);
    for (int i = 3; i < n; i++)
    {
        for (int j = 0; j < primes.size(); j++)
        {
            if ((i % primes[j]) == 0)
            {
                isPrime = 1;
            }
        }
        if (isPrime == 0)
        {
            primes.emplace_back(i);
        }
        isPrime = 0;
    }

    for (int i = 0; i < primes.size(); i++)
    {
        cout << primes[i] << " is prime" << endl;
    }

    return 0;
}