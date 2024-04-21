/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:34:19 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/11 22:13:23 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string wpname)
{
	type = wpname;
}

Weapon::Weapon()
{
	std::cout << "Weapon Constructor Called!" << std::endl;
}

Weapon::Weapon(std::string wpname)
{
	std::cout << "Weapon Constructor Called!" << std::endl;
	type = wpname;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor Called!" << std::endl;
}
