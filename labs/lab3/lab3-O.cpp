#include <bits/stdc++.h>

using namespace std;

void selection_sort(vector<int> vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int temp_index = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[temp_index] < vec[j])
            {
                temp_index = j;
            }
        }
        int temp = vec[i];
        vec[i] = vec[temp_index];
        vec[temp_index] = temp;
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{
    int n, curr;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        vec.emplace_back(curr);
    }
    selection_sort(vec);
    return 0;
}