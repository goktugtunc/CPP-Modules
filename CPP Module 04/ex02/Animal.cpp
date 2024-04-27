/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:51:31 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/21 01:03:35 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Default Constructor Called!" << std::endl;
	this->type = "ANIMAL TYPE NOT FOUND";
}

Animal::Animal(Animal &other)
{
	std::cout << "Animal Copy Constructor Called!" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal Copy Assignment Operator Called!" << std::endl;
	this->type = other.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor Called!" << std::endl;
}

void Animal::makeSound(void)
{
	std::cout << this->type << ": " << "NULL SOUND!" << std::endl;
}

std::string Animal::getType(void)
{
	return (this->type);
}
