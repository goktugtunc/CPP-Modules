/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 01:25:11 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/11 22:08:16 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor Called!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor Called!" << std::endl;
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