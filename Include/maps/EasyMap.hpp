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
    EasyMap() : WIDTH(23), HEIGHT(12), MAP_SIZE(WIDTH * HEIGHT) {}
    ~EasyMap();
    void CreateEasyMap();
    string * GetEasyMap();
    int GetHeightEasyMap();
    int GetWidthEasyMap();
};

#endif /* EasyMap_hpp */
