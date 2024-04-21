/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:51:33 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/21 01:03:18 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default Constructor Called!" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat &other)
{
	std::cout << "Cat Copy Constructor Called!" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy Assignment Operator Called!" << std::endl;
	this->type = other.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor Called!" << std::endl;
}

void Cat::makeSound(void)
{
	std::cout << getType() << ": " << "Miaw" << std::endl;
}
