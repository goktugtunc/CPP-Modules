/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:51:33 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/25 00:35:39 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default Constructor Called!" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat &other)
{
	std::cout << "Cat Copy Constructor Called!" << std::endl;
	this->brain = new Brain();
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy Assignment Operator Called!" << std::endl;
	this->type = other.type;
	for (unsigned long i = 0; i < 100; i++)
	{
		this->brain->ideas[i] = "Copied " + other.brain->ideas[i];
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor Called!" << std::endl;
	delete this->brain;
}

void Cat::makeSound(void)
{
	std::cout << getType() << ": " << "Miaw" << std::endl;
}


void Cat::compareTo(Cat const & other_cat) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two dogs\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_cat.brain) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->ideas)[i] << "\t\t\t | \t\t\t" << ((other_cat.brain)->ideas)[i] << std::endl;
	std::cout << std::endl;
}
