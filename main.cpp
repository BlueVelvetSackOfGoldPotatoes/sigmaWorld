#include <iostream>
#include "World/World.h"

using namespace std;

int main()
{
    World world;

    world.print();
}

/usr/bin/ld: /tmp/cc6rzvcr.o: in function `main':
main.cpp:(.text+0x24): undefined reference to `World::World()'
/usr/bin/ld: main.cpp:(.text+0x30): undefined reference to `World::print() const'
collect2: error: ld returned 1 exit status