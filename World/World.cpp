#include "World.h"
#include <random>
#include <iostream>
#include <ctime>

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
    for (size_t row = 0; row != d_height; row++)
        for (size_t col = 0; col != d_width; col++)
            d_map[row][col].setState(Square::State::EMPTY);
}

void World::run(int doomsday)
{
    int rand_seeder;

    // start of print iteration
    for (int iter = 0; iter != doomsday; iter++)
    {
        for (size_t column = 0; column != d_width; column++)
            cout << "-";
        cout << "\n";
        cout << "| Iter " << iter << "\n";
        cout << "|";
        for (size_t column = 0; column != d_width-2; column++)
            cout << " ";
        cout << "\n";
        for (size_t column = 0; column != d_width; column++)
            cout << "-";
        cout << "\n";
    // end of print iteration

        for (size_t row = 0; row != d_height; row++)
        {
            for (size_t col = 0; col != d_width; col++)
            {
                rand_seeder = 1 + (rand() % 100);
                if (rand_seeder <= 50)
                {
                    d_map[row][col].setState(Square::State::FOOD);
                }
            }
        }
        this->print(doomsday);
    }
}

void World::print(int doomsday) const
{
    
    for (size_t row = 0; row != d_height; row++)
    {
        for (size_t col = 0; col != d_width; col++)
            switch (d_map[row][col].state())
            {
                case Square::State::EMPTY:
                    cout << '_';
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
        cout << '\n';
    }
}

void World::erase() const
{

}
