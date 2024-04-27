/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:51:27 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/26 22:21:14 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria Default Constructor Called!" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria String Constructor Called!" << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria &other)
{
	std::cout << "AMateria Copy Constructor Called!" << std::endl;
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	std::cout << "AMateria Copy Assignment Operator Called!" << std::endl;
	this->type = other.type;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor Called!" << std::endl;
}
