#include <iostream>
#include "World/World.h"

using namespace std;

int main()
{
    World world;

    int doomsday; 
    cout << "Iterations: ";
    cin >> doomsday; // Get user input from the keyboard
    
    world.run(doomsday);
}