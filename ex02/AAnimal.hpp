#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string _type;
	
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(const AAnimal &src);
		virtual ~AAnimal();

		std::string		getType(void) const;
		void			setType(const std::string type);

		virtual void	makeSound(void) const = 0;
};

#endif