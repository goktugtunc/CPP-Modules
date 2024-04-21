/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:51:38 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/21 01:03:22 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default Constructor Called!" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog &other)
{
	std::cout << "Dog Copy Constructor Called!" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy Assignment Operator Called!" << std::endl;
	this->type = other.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor Called!" << std::endl;
}

void Dog::makeSound(void)
{
	std::cout << getType() << ": " << "Haw Haw" << std::endl;
}
