#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{

    vector<double> distances;
    double distance;
    while (cin >> distance)
    {
        if (distance < 0)
        {
            cout << "Distance cannot be less than zero" << endl;
        }
        else
        {
            distances.push_back(distance);
        }
    }
    double total_distance = 0;
    double min_distance = distances[0];
    double max_distance = 0;
    for (int i = 0; i < distances.size(); i++)
    {
        total_distance += distances[i];
        if (min_distance > distances[i])
        {
            min_distance = distances[i];
        }
        if (max_distance < distances[i])
        {
            max_distance = distances[i];
        }
    }
    cout << "Total Distance: " << total_distance << endl;
    cout << "Minimum distance: " << min_distance << endl;
    cout << "Max distance: " << max_distance << endl;

    return 0;
}