#ifndef _AGENT_H
#define _AGENT_H

class Agent
{
public:
    enum State
    {
        ALIVE,
        DEAD
    };

private:
    State d_state;

public:
    Agent();
    Agent(State state);

    void setState(State state);
    State state() const;
};

#endif
