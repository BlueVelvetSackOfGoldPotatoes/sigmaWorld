#include "Agent.h"
#include <random>
#include <time.h>

using namespace std;

Agent::Agent()
:
    Agent(ALIVE)
{}

Agent::Agent(State state)
:
    d_state(state)
{}

void Agent::setState(State state)
{
    d_state = state;
}

Agent::State Agent::state() const
{
    return d_state;
}