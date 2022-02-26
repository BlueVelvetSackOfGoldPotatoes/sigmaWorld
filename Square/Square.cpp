#include "Square.h"
#include <random>
#include <time.h>

using namespace std;

Square::Square()
:
    Square(EMPTY)
{}

Square::Square(State state)
:
    d_state(state)
{}

void Square::setState(State state)
{
    d_state = state;
}

Square::State Square::state() const
{
    return d_state;
}