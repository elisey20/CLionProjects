#include "methods.h"

void sayAnimal(Animal animal)
{
    animal.say();
}

void sayAnimalRef(Animal &animal)
{
    animal.say();
}

void sayAnimalPointer(Animal *animal)
{
    animal->say();
}
