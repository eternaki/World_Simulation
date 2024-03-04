#include <iostream>
#include "Organism.h"
#include "Vector.h"

class World {
public:
    World(int w, int h);

private:
    int width;
    int height;
    Vector<Organism> organisms;
};