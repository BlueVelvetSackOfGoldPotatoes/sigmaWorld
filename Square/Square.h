#ifndef _SQUARE_H
#define _SQUARE_H

class Square
{
public:
    enum State
    {
        EMPTY,
        FOOD,
        AGENT,
        WALL
    };

private:
    State d_state;

public:
    Square();
    Square(State state);

    State state() const;
};

#endif