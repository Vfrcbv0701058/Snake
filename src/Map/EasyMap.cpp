#include "../../include/maps/EasyMap.hpp"

void EasyMap::CreateEasyMap(){
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

void SetCursor(int x, int y) {
    initscr(); // Initialization ncurses
    move(y, x); // Set cursor position
    endwin(); // End work with ncurses
}

string* EasyMap::GetEasyMap(){      // Get map
    return map;
}

int EasyMap::GetHeightEasyMap(){         // Get height
    return HEIGHT;
}

int EasyMap::GetWidthEasyMap(){          // Get width
    return WIDTH;
}

EasyMap::~EasyMap(){        // Delete map
    delete [] map;
}
