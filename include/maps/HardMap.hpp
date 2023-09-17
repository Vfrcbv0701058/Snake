#ifndef map_h
#define map_h

#include <string>
#include <iostream>
#include "../../include/maps/ChooseMode.hpp"
using namespace std;
//    "###########\n"
//    "#         #\n"
//    "#         #\n"
//    "#         #\n"
//    "#         #\n"
//    "#         #\n"
//    "#         #\n"
//    "###########\n";


class HardMap {
private:
    const int WIDTH_HARD;
    const int HEIGHT_HARD;
    const int MAP_SIZE;
    string* map = new string[HEIGHT_HARD];
public:
    HardMap() : WIDTH_HARD(12), HEIGHT_HARD(9), MAP_SIZE(WIDTH_HARD * HEIGHT_HARD) {}
    ~HardMap();
    void Create_Map();
    string * GetMap();
    int GetHeight();
    int GetWidth();
};

#endif /* map_h */
