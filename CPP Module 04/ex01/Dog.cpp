/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:51:38 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/21 02:41:48 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default Constructor Called!" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog &other)
{
	std::cout << "Dog Copy Constructor Called!" << std::endl;
	this->brain = new Brain();
	*this = other;
}

Dog &Dog::operator=(Dog const &other)
{
	std::cout << "Dog Copy Assignment Operator Called!" << std::endl;
	this->type = other.type;
	for (unsigned long i = 0; i < 100; i++)
	{
		this->brain->ideas[i] = "Copied " + other.brain->ideas[i];
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor Called!" << std::endl;
	delete this->brain;
}

void Dog::makeSound(void)
{
	std::cout << getType() << ": " << "Haw Haw" << std::endl;
}

void Dog::compareTo(Dog const & other_dog) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two dogs\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_dog.brain) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->ideas)[i] << "\t\t\t | \t\t\t" << ((other_dog.brain)->ideas)[i] << std::endl;
	std::cout << std::endl;
}
