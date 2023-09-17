#include "../../include/maps/EasyMap.hpp"

void EasyMap::Create_Map(){
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

string* EasyMap::GetMap(){      // Get map
    return map;
}

int EasyMap::GetHeight(){         // Get height
    return HEIGHT;
}

int EasyMap::GetWidth(){          // Get width
    return WIDTH;
}

EasyMap::~EasyMap(){        // Delete map
    delete [] map;
}
