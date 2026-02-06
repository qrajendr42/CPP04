#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	// std::cout << "---------------dog---------------" << std::endl;
	// const Animal *j = new Dog();
	// std::cout << "---------------cat---------------" << std::endl;
	// const Animal *i = new Cat();
	
	// std::cout << "---------------dog deconstructor---------------" << std::endl;
	// delete i;
	// std::cout << "---------------cat deconstructor---------------" << std::endl;
	// delete j;


	Dog* d1 = new Dog();
	d1->setIdea(0, "food");

	Dog* d2 = new Dog(*d1); // copy

	d1->setIdea(0, "sleep");

	std::cout << d1->getIdea(0) << std::endl; // sleep
	std::cout << d2->getIdea(0) << std::endl; // food

	delete d1;
	delete d2;
	return (0);
}
