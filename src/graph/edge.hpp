#include"basic.hpp"

class Edge {

private:

    int dist;
    int time;
    TrafficIntensity intensity;
    RoadType roadtype;
    int currentVehicles;
    unordered_map<NodeType,int> vehicleCountMap;
    bool isBidirectional;

public:
    Status  setDistance             (int distance);
    Status  setTimeTaken            (int timeTaken);
    Status  setTrafficIntensity     (TrafficIntensity intensity);
    Status  setRoadType             (RoadType roadtype);
    Status  appendVehicleCount      (NodeType vehicle,int count);
    Status  changeVehicleCount      (NodeType vehicle,int count);
    Status  setBidirectional        (bool isBidirectional);

    int              getDistance             ();
    int              getTimeTaken            ();
    TrafficIntensity getTrafficIntensity     ();
    RoadType         getRoadType             ();
    unordered_map<NodeType,int> getVehicleCountMap ();
    int              getVehicleCount         ();
    bool             biDirectionalStatus     ();

};