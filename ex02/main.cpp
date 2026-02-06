#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "---------------dog---------------" << std::endl;
	const AAnimal *j = new Dog();
	std::cout << "---------------cat---------------" << std::endl;
	const AAnimal *i = new Cat();
	
	std::cout << "---------------dog deconstructor---------------" << std::endl;
	delete i;
	std::cout << "---------------cat deconstructor---------------" << std::endl;
	delete j;

	return (0);
}
