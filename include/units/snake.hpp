#ifndef snake_h
#define snake_h

#include "../../include/maps/EasyMap.hpp"
#include "../../include/maps/HardMap.hpp"
#include "../maps/ChooseMode.hpp"
using namespace std;

class snake : private EasyMap, public HardMap {
private:
    void SetMap_H_and_W();
    int MAP_HEIGHT;
    int MAP_WIDTH;
    const int MAX_LEN_SNAKE;
    const int UP , DOWN, LEFT, RIGHT;
    int snake_dir;     // set snake's direction
    bool isRunning;
    char snake_view ;   //
    int* snake_x; // кордината по х
    int* snake_y; // кордиана по y
    int snake_len; //текущая длинна змеи
public:
    snake();
    ~snake();
};



#endif /* snake_h */
