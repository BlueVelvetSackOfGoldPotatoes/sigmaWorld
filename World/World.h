#ifndef _WORLD_H
#define _WORLD_H

#include "../Square/Square.h"
#include <vector>

class World
{
	size_t d_height;
	size_t d_width;

	std::vector<std::vector<Square>> d_map;

public:
	World();
	World(size_t height, size_t width);

	void print() const;
	void erase() const;

private:
	void initialize();
};

#endif
