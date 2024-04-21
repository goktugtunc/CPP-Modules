/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:31:27 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/21 01:03:26 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal Default Constructor Called!" << std::endl;
	this->type = "ANIMAL TYPE NOT FOUND";
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy Constructor Called!" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy Assignment Operator Called!" << std::endl;
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongCat Destructor Called!" << std::endl;
}

void WrongAnimal::makeSound(void)
{
	std::cout << this->type << ": " << "NULL SOUND!" << std::endl;
}

std::string WrongAnimal::getType(void)
{
	return (this->type);
}
