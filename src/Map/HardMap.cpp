#include "../../include/maps/HardMap.hpp"

void HardMap::Create_Map(){
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

HardMap::~HardMap(){
    delete [] map;
}

string* HardMap::GetMap(){
    return map;
}
