/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 02:15:11 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/19 22:46:21 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Name Constructor Called!" << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &other)
{
	std::cout << "FragTrap Copy Constructor Called!" << std::endl;
	*this = other;
}

FragTrap&	FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Copy Assignment Operator Called!" << std::endl;
	this->name = other.name;
	this->health = other.health;
	this->energy = other.energy;
	this->attackDamage = other.attackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
    if (energy > 0 && health > 0)
        std::cout << "FragTrap " << name << " wants to high you five!" << std::endl;
    else 
        std::cout << "FragTrap " << name << " is can't give you a high five it is dead" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor Called!" << std::endl;
}
