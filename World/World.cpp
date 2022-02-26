#include "World.h"
#include <random>
#include <time.h>
#include <iostream>

using namespace std;

World::World()
:
    World(10, 10)
{}

World::World(size_t height, size_t width)
:
    d_height(height),
    d_width(width)
{
    for (size_t row = 0; row != d_height; row++)
        d_map.push_back(vector<Square>(width));

    this->initialize();
}

void World::initialize()
{
    srand(time(NULL));

    for (size_t row = 0; row != d_height; row++)
        for (size_t col = 0; col != d_width; col++)
            d_map[row][col].setState(Square::State::FOOD);
}

void World::print() 
{
    for (size_t row = 0; row != d_height; row++)
        for (size_t col = 0; col != d_width; col++)
            switch (d_map[row][col].state())
            {
                case Square::State::EMPTY:
                    cout << ' ';
                break;
                case Square::State::FOOD:
                    cout << 'F';
                break;
                case Square::State::AGENT:
                    cout << 'O';
                break;
                case Square::State::WALL:
                    cout << '#';
                break;
            }
}
                