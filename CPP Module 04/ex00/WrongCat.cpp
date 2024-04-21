/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:32:18 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/21 01:03:30 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Default Constructor Called!" << std::endl;
	this->type = "Cat";
}

WrongCat::WrongCat(WrongCat &other)
{
	std::cout << "WrongCat Copy Constructor Called!" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat Copy Assignment Operator Called!" << std::endl;
	this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor Called!" << std::endl;
}

void WrongCat::makeSound(void)
{
	std::cout << this->type << ": " << "Miaw" << std::endl;
}
