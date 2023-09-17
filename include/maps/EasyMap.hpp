#ifndef EasyMap_hpp
#define EasyMap_hpp

#include <string>
#include <iostream>
//#include "../../include/maps/ChooseMode.hpp"
using namespace std;
//    "#######################\n"
//    "#                     #\n"
//    "#                     #\n"
//    "#                     #\n"
//    "#                     #\n"
//    "#                     #\n"
//    "#                     #\n"
//    "#                     #\n"
//    "#                     #\n"
//    "#                     #\n"
//    "#                     #\n"
//    "#######################\n";


class EasyMap {
private:
    const int WIDTH;
    const int HEIGHT;
    const int MAP_SIZE;
    string* map = new string[HEIGHT];
public:
    EasyMap() : WIDTH(12), HEIGHT(9), MAP_SIZE(WIDTH * HEIGHT) {}
    ~EasyMap();
    void Create_Map();
    string * GetMap();
    int GetHeight();
    int GetWidth();
};

#endif /* EasyMap_hpp */
