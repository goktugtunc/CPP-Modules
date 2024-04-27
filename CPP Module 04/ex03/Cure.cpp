/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:15:03 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/26 22:19:27 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure(void)
{
	std::cout << "Cure Default Constructor Called!" << std::endl;
	this->type = "cure";
}

Cure::Cure(Cure &other)
{
	std::cout << "Cure Copy Constructor Called!" << std::endl;
	*this = other;
}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Cure Copy Constructor Assignment Called!" << std::endl;
	this->type = other.type;
	return (*this);
}

AMateria *Cure::clone(void) const
{
	std::cout << "Amateria Cloned!" << std::endl;
	AMateria *newAMateria = new Cure();
	*newAMateria = *this;
	return (newAMateria);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " + target.getName() + "’s wounds *" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure Destructor Called!" << std::endl;
}
