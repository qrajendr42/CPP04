#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
//     std::cout << "---------------constructor---------------" << std::endl;
// 	const Animal *i = new Cat();
// 	const WrongAnimal *j = new WrongCat();
//     std::cout << "\n---------------getType---------------" << std::endl;

// 	std::cout << i->getType() << " " << std::endl;
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << "\n---------------makeSound---------------" << std::endl;

// 	i->makeSound();
// 	j->makeSound();
// 	std::cout << "\n---------------Destructor---------------" << std::endl;

// 	delete i;
// 	delete j;

// 	return (0);
// }

int main()
{
std::cout << "---------------constructor---------------" << std::endl;
const Animal* m = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal *k = new WrongCat();
const WrongAnimal *l = new WrongAnimal();
std::cout << "\n---------------getType---------------" << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << m->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;
std::cout << l->getType() << " " << std::endl;
std::cout << "\n---------------makeSound---------------" << std::endl;
j->makeSound();
i->makeSound();
m->makeSound();
k->makeSound();
l->makeSound();
std::cout << "\n---------------Destructor---------------" << std::endl;
delete i;
delete j;
delete m;
delete k;
delete l;
return (0);
}
