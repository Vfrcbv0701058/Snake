#include "../../include/maps/HardMap.hpp"

void HardMap::CreateHardMap(){
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

string* HardMap::GetHardMap(){      // Get map
    return map;
}

int HardMap::GetHeightHardMap(){         // Get height
    return HEIGHT;
}

int HardMap::GetWidthHardMap(){          // Get width
    return WIDTH;
}
