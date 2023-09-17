#include "../../include/units/snake.hpp"

snake::snake(): MAP_HEIGHT(0), MAP_WIDTH(0), MAX_LEN_SNAKE((MAP_WIDTH - 3) * (MAP_HEIGHT - 2)), UP(0), DOWN(1), LEFT(2), RIGHT(3), snake_dir(UP), isRunning(true), snake_view('0'), snake_x(nullptr), snake_y(nullptr), snake_len(1) {
    SetMap_H_and_W();
    snake_x = new int[MAX_LEN_SNAKE];
    snake_y = new int[MAX_LEN_SNAKE];
    snake_x[0] = MAP_WIDTH / 2;
    snake_y[0] = MAP_HEIGHT / 2;
    
}

void snake::SetMap_H_and_W(){
    if (GetMapType()) {     // set height and width from hard
        HardMap map;
        MAP_HEIGHT = GetHeightHardMap();
        MAP_WIDTH = GetWidthHardMap();
    } else {      // set height and width from easy map
        EasyMap map;
        MAP_HEIGHT = GetHeightEasyMap();
        MAP_WIDTH = GetWidthEasyMap();
    }
}

snake::~snake() {
    delete[] snake_x;
    delete[] snake_y;
}
