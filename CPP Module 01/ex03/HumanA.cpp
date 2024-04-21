/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:36:39 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/11 22:14:01 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA::HumanA()
{
	std::cout << "Human A Constructor Called!" << std::endl;
}

HumanA::HumanA(std::string humanName, Weapon &wp)
{
	std::cout << "Human A Constructor Called!" << std::endl;
	name = humanName;
	weapon = &wp;
}

HumanA::~HumanA()
{
	std::cout << "Human A Destructor Called!" << std::endl;
}
