#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	_brain = new Brain();
	_type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : AAnimal(copy)
{
	_brain = new Brain(*copy._brain);
	if (this != &copy)
		*this = copy;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		AAnimal::operator=(src);
		*_brain = *src._brain;
	}
	std::cout << "Dog Copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog Sound" << std::endl;
}
