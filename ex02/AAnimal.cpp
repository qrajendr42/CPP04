#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	_type = "AAnimal";
	std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	_type = type;
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	if (this != &copy)
		*this = copy;
	std::cout << "AAnimal Copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &src)
{
	if (this != &src)
		_type = src._type;
	std::cout << "AAnimal Copy assignment operator called" << std::endl;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (_type);
}

void	AAnimal::setType(const std::string type)
{
	_type = type;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal Sound" << std::endl;
}
