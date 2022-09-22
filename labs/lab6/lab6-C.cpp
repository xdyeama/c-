#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, curr;
    cin >> n;
    vector<int> vec1;
    vector<int> vec2;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        vec1.emplace_back(curr);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        vec2.emplace_back(curr);
    }
    for (int i = 0; i < vec1.size(); i++)
    {
        for (int j = 0; j < vec2.size(); j++)
        {
            if (vec1[i] == vec2[j])
            {
                count++;
                vec2.erase(vec2.begin() + j);
            }
        }
    }
    cout << count;

    return 0;
}