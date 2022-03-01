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
	void hear(size_t intensity);

public:
    Agent();
    Agent(State state);
	// size_t speak(size_t intensity);

    void setState(State state);
    State state() const;
};

#endif
