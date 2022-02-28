#include <iostream>
#include "World/World.h"

using namespace std;

/**
 * Reads command line input, generates world and starts the main loop.
 *
 * @param arg1 * arg2 = matrix size; arg3 = number of iterations to run the world
 */

int main(int argc, char* argv[])
{
    World world(atoi(argv[1]), atoi(argv[2]));
    world.run(atoi(argv[3]));
}