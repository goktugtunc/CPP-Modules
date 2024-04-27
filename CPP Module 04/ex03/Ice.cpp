/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:58:29 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/26 02:38:29 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout << "Ice Default Constructor Called!" << std::endl;
	this->type = "ice";
}

Ice::Ice(Ice &other)
{
	std::cout << "Ice Copy Constructor Called!" << std::endl;
	*this = other;
}

Ice &Ice::operator=(const Ice &other)
{
	std::cout << "Ice Copy Constructor Assignment Called!" << std::endl;
	this->type = other.type;
	return (*this);
}

AMateria *Ice::clone(void) const
{
	std::cout << "Amateria Cloned!" << std::endl;
	AMateria *newAMateria = new Ice();
	*newAMateria = *this;
	return (newAMateria);
}

Ice::~Ice(void)
{
	std::cout << "Ice Destructor Called!" << std::endl;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
