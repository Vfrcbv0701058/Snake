#ifndef EasyMap_hpp
#define EasyMap_hpp

#include <string>
#include <iostream>
#include <ncurses.h>
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
    EasyMap() : WIDTH(23), HEIGHT(12), MAP_SIZE(WIDTH * HEIGHT) {
        CreateEasyMap();
    }
    ~EasyMap();
    void CreateEasyMap();
//    dsada
    string * GetEasyMap();
    int GetHeightEasyMap();
    int GetWidthEasyMap();
    void SetCursor(int x, int y);
};

#endif /* EasyMap_hpp */
