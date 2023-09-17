#include "../../include/units/snake.hpp"




void snake::SetMap_H_and_W(){
    if (GetMapType()) {     // set height and width from hard
        HardMap map;
        MAP_HEIGHT = HardMap::GetWidth();
        MAP_WIDTH = HardMap::GetWidth();
    }else{      // set height and width from easy map
        EasyMap map;
        MAP_HEIGHT = EasyMap::GetHeight();
        MAP_WIDTH = EasyMap::GetWidth();
    }
}
