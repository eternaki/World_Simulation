#include <iostream>

class Organism {
public:
    Organism(int s, int i, int x, int y, World& sw);

    virtual void share(); // metoda wirtualna - każdy dziedziczący będzie musiał ją zaimplementować
    virtual void collision(Organism& org); // metoda wirtualna - każdy dziedziczący będzie musiał ją zaimplementować
    virtual char getSymbol() const; // metoda wirtualna - każdy dziedziczący będzie musiał ją zaimplementować
    int getPower() const;
    int getInitiative() const;
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);

protected:
    int power;
    int initiative;
    int posX;
    int posY;
    World& world;
};
