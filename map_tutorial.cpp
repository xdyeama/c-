#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

// to Initialize custom data type
struct CityRecord
{
    string Name;
    uint64_t Population;
    double Latitude, Longitude;
};

// Create custom hash function for CityRecord custom datatype
template <>
struct hash<CityRecord>
{
    size_t operator()(const CityRecord &key)
    {
        return hash<string>()(key.Name);
    }
};

int main()
{
    // vector<CityRecord> cities;
    // // insert a bunch of arguments
    // cities.emplace_back("Melbourne", 5000000, 28.5, 44.5);
    // cities.emplace_back("Aktobe", 8000000, 28.1, 42.8);
    // cities.emplace_back("New York", 5432853, 32.5, 41.2);
    // cities.emplace_back("Seoul", 41413232, 51.3, 53.6);

    // // iterate over cities vector
    // for (const auto &city : cities)
    // {
    //     if (city.Name == "Aktobe")
    //     {
    //         city.Population;
    //         break;
    //     }
    // }

    unordered_map<CityRecord, uint32_t> foundedMap;
    map<string, CityRecord> cityMap;
    cityMap["Melbourne"] = CityRecord{"Melbourne", 5000000, 28.5, 44.5};
    cityMap["Aktobe"] = CityRecord{"Aktobe", 8000000, 28.1, 42.8};
    cityMap["New York"] = CityRecord{"New York", 7461876, 13.1, 23.6};
    cityMap["London"] = CityRecord{"London", 13242131, 18.3, 32.4};

    CityRecord &aktobeData = cityMap["Aktobe"];
    aktobeData.Population;

    return 0;
}