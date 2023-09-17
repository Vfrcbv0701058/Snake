#include "../../include/maps/ChooseMode.hpp"

void Choose_mode(){
    do {
        cout << "Enter the level of difficulty (1 - Hard, 2 - Easy)" << endl;
        cin >> diff;
    } while (diff != 1 && diff != 2);
}

bool GetMapType(){
    return (diff == 1); // if diff = 1 it's "true";
}
