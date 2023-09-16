#include "../../include/maps/ChooseMode.hpp"

bool Choose_mode(){
    cout << "Enter the level of difficulty (1 - Hard, 2 - Easy)" << endl;
    do {
        cin >> diff;
    } while (diff != 1 && diff != 2);
    return (diff == 1); // if diff = 1 it's "true"
}
