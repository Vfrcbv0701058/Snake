#ifndef snake_h
#define snake_h

#include "../../include/units/snake.hpp"
#include "../../include/maps/EasyMap.hpp"
#include "../../include/maps/HardMap.hpp"
#include "../maps/ChooseMode.hpp"
using namespace std;

class snake : private EasyMap, public HardMap {
private:
    void SetMap_H_and_W();
    int MAP_HEIGHT;
    int MAP_WIDTH;
    const int MAX_LEN_SNAKE = (MAP_WIDTH - 3) * (MAP_HEIGHT - 2);
    const int UP = 0;
    const int DOWN = 1;
    const int LEFT = 2;
    const int RIGHT = 3;
    int snake_dir = UP;     // set snake's direction
    bool isRunning = true;
    char snake_view = 'O';   //
//    int snake_x[MAX_LEN_SNAKE] = 0; // кордината по х
//    int snake_y[MAX_LEN_SNAKE] = 0; // кордиана по y
//    int snake_len = 1; //текущая длинна змеи
public:
    snake();
};


#endif /* snake_h */
