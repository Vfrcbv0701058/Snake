#ifndef map_h
#define map_h

#include <string>
#include <iostream>
#include <ncurses.h>
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
    const int WIDTH;
    const int HEIGHT;
    const int MAP_SIZE;
    string* map = new string[HEIGHT];
public:
    HardMap() : WIDTH(12), HEIGHT(9), MAP_SIZE(WIDTH * HEIGHT) {
        CreateHardMap();
    }
    ~HardMap();
    void CreateHardMap();
    string * GetHardMap();
    int GetHeightHardMap();
    int GetWidthHardMap();
    void SetCursor(int x, int y);
};

#endif /* map_h */
