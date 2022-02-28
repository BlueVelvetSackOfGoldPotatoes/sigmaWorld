#include <iostream>
#include "World/World.h"

using namespace std;

int main(int argc, char *argv[])
{

    // size_t rows;
    // size_t columns;
    // cout << "N. Rows: ";
    // cin >> rows;
    // cout << "N. Columns: ";
    // cin >> columns;

    World world(atoi(argv[1]), atoi(argv[2]));



    int doomsday;
    cout << "Iterations: ";
    cin >> doomsday;
    
    world.run(doomsday);
}