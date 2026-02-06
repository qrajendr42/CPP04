#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

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

    std::cout << "\n=== 2) Delete all as Animal* (virtual destructor check) ===" << std::endl;

    for (int i = 0; i < size; i++)
        delete animals[i];

    std::cout << "\n=== 3) Deep copy test (Dog copy constructor) ===" << std::endl;

    Dog* d1 = new Dog();
    d1->setIdea(0, "food");

    Dog* d2 = new Dog(*d1);

    d1->setIdea(0, "sleep");

    std::cout << "d1 idea[0]: " << d1->getIdea(0) << std::endl;
    std::cout << "d2 idea[0]: " << d2->getIdea(0) << std::endl;

    delete d1;
    delete d2;

    std::cout << "\n=== 4) Deep copy test (Cat copy constructor) ===" << std::endl;

    Cat* c1 = new Cat();
    c1->setIdea(0, "mouse");

    Cat* c2 = new Cat(*c1);

    c1->setIdea(0, "nap");

    std::cout << "c1 idea[0]: " << c1->getIdea(0) << std::endl;
    std::cout << "c2 idea[0]: " << c2->getIdea(0) << std::endl;

    delete c1;
    delete c2;

    std::cout << "\n=== 5) Deep copy test (assignment operator) ===" << std::endl;

    Dog d3;
    d3.setIdea(0, "run");

    Dog d4;
    d4 = d3;

    d3.setIdea(0, "sleep");

    std::cout << "d3 idea[0]: " << d3.getIdea(0) << std::endl;
    std::cout << "d4 idea[0]: " << d4.getIdea(0) << std::endl;

    Cat c3;
    c3.setIdea(0, "play");

    Cat c4;
    c4 = c3;

    c3.setIdea(0, "eat");

    std::cout << "c3 idea[0]: " << c3.getIdea(0) << std::endl;
    std::cout << "c4 idea[0]: " << c4.getIdea(0) << std::endl;

    return 0;
}