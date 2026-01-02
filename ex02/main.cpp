#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const AAnimal *j = new Dog();
	const AAnimal *i = new Cat();
	
	delete i;
	delete j;

	return (0);
}
