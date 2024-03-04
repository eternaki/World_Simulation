#include "Organism.h"

Organism::Organism(int s, int i, int x, int y, World& sw) : power(s), initiative(i), posX(x), posY(y), world(sw) {}

virtual void Organism::share() = 0; // metoda wirtualna - każdy dziedziczący będzie musiał ją zaimplementować
virtual void Organism::collision(Organizm& org) = 0; // metoda wirtualna - każdy dziedziczący będzie musiał ją zaimplementować
virtual char Organism::getSymbol() const = 0; // metoda wirtualna - każdy dziedziczący będzie musiał ją zaimplementować

int Organism::getPower() const {
return power;
}

int Organism::getInitiative() const {
return initiative;
}

int Organism::getX() const {
return posX;
}

int Organism::getY() const {
return posY;
}

void Organism::setX(int x) {
posX = x;
}

void Organism::setY(int y) {
posY = y;
}