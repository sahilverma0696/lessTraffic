#include<basic.hpp>

class Edge {
public:
    int dist;
    int time;
    TrafficIntensity intensity;
    RoadType roadtype;
    int currentVehicles;
    unordered_map<NodeType,int> vehicleCountMap;
};