#pragma once

#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<string>

using namespace std;

enum class  NodeType {
    twoWheeler      = 2,
    threeWheeler,
    fourWheeler,
    heavyWheeler,
};

enum class RoadType {
    singleLane = 1,
    doubleLane,
    highWay    = 4,
    expressWay = 6,
};

enum class TrafficIntensity {
    empty = 0,
    low,
    medium,
    high,
    blocked,
};

enum class Status {
    SUCCESS = 0,
    FAIL,
    INSERTED,
    INSERT_FAIL,
    EXISTS,
    UPDATED,
};