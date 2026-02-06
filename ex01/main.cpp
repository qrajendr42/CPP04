#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "=== 1) Array of Animal* (half Dog, half Cat) ===" << std::endl;

    const int size = 10;
    Animal* animals[size];

    for (int i = 0; i < size; i++)
    {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n=== 2) Delete all as Animal* (tests virtual destructor) ===" << std::endl;

    for (int i = 0; i < size; i++)
        delete animals[i];

    std::cout << "\n=== 3) Deep copy test (Dog) ===" << std::endl;

    Dog* d1 = new Dog();
    d1->setIdea(0, "food");

    Dog* d2 = new Dog(*d1); // copy constructor (deep copy expected)

    d1->setIdea(0, "sleep");

    std::cout << "d1 idea[0]: " << d1->getIdea(0) << std::endl; // sleep
    std::cout << "d2 idea[0]: " << d2->getIdea(0) << std::endl; // food

    delete d1;
    delete d2;

    return 0;
}
