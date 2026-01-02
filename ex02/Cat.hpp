#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*_brain;

	public:
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &src);
		~Cat();

		void	makeSound(void) const;
};

#endif
