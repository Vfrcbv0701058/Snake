#ifndef map_h
#define map_h

#include <string>
//#include "../../include/maps/ChooseMode.hpp"
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
public:
    HardMap() : MAP_SIZE(WIDTH_HARD * HEIGHT_HARD), WIDTH_HARD(12), HEIGHT_HARD(9) {}
    string Draw_map();
};

#endif /* map_h */
