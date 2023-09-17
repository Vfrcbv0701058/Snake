#include "../../include/maps/HardMap.hpp"

void HardMap::Create_Map(){
    for(int i = 0; i < HEIGHT; i++){
        for(int j = 0; j < WIDTH; j++){
            if (i > 0 || j > 0 || i < HEIGHT - 1 || j < WIDTH - 1) {
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
    return HEIGHT;
}

int HardMap::GetWidth(){          // Get width
    return WIDTH;
}
