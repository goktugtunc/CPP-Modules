/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 01:00:27 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/12 14:56:57 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << Name << " Constructor Called!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << Name << " Destructor Called!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string zombieName)
{
	Name = zombieName;
}

std::string	Zombie::getName(void)
{
	return (Name);
}
