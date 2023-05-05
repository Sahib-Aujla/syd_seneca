#ifndef LOCATION_H
#define LOCATION_H
#include <iostream>
using namespace std;
class Location
{
    string locationID;
    string locationName;
    double latitude;
    double longitude;
    public:
    Location getLocation();
    Location(string name);
    string getLocatioName();
    void setLocationName(string name);
};



#endif