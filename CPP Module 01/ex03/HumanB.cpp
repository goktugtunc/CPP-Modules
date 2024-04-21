/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:41:05 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/11 22:13:46 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::HumanB()
{
	std::cout << "Human B Constructor Called!" << std::endl;
}

HumanB::HumanB(std::string humanName)
{
	std::cout << "Human B Constructor Called!" << std::endl;
	name = humanName;
}

HumanB::~HumanB()
{
	std::cout << "Human B Destructor Called!" << std::endl;
}

void	HumanB::setWeapon(Weapon &wp)
{
	weapon = &wp;
}
