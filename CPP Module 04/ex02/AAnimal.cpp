/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:51:31 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/25 00:29:56 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Animal Default Constructor Called!" << std::endl;
	this->type = "ANIMAL TYPE NOT FOUND";
}

AAnimal::AAnimal(AAnimal &other)
{
	std::cout << "Animal Copy Constructor Called!" << std::endl;
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	std::cout << "Animal Copy Assignment Operator Called!" << std::endl;
	this->type = other.type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal Destructor Called!" << std::endl;
}

std::string AAnimal::getType(void)
{
	return (this->type);
}
