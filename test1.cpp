#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> names;

    for (string name; cin >> name;)
    {
        names.push_back(name);
    }

    sort(names.begin(), names.end());

    for (int i = 0; i < names.size(); i++)
    {
        if (i == 0 || names[i-1] != names[i])
        {
            cout << names[i] << endl;
        }
    }

    return 0;
}