#include "../../include/maps/EasyMap.hpp"

void EasyMap::Create_Map(){
    for(int i = 0; i < HEIGHT_HARD; i++){
        for(int j = 0; j < WIDTH_HARD; j++){
            if (i > 0 || j > 0 || i < HEIGHT_HARD - 1 || j < WIDTH_HARD - 1) {
                map[i] += " ";
            } else{
                map[i] += "#";
            }
        }
        cout << "\n";
    }
}

HardMap::~HardMap(){        // Delete map
    delete [] map;
}

string* HardMap::GetMap(){      // Get map
    return map;
}

int HardMap::GetHeight(){         // Get height
    return HEIGHT_HARD;
}

int HardMap::GetWidth(){          // Get width
    return WIDTH_HARD;
}
