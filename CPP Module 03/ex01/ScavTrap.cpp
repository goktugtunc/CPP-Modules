/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 01:32:08 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/19 22:41:25 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default Constructor Called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Name Constructor Called!" << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &other)
{
	std::cout << "ScavTrap Copy Constructor Called!" << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy Assignment Operator Called!" << std::endl;
	this->name = other.name;
	this->health = other.health;
	this->energy = other.energy;
	this->attackDamage = other.attackDamage;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	if (this->health != 0)
		std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " can't switch to Gate keeper mode. Because it is dead!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->health != 0 && this->energy != 0)
	{
		std::cout << "ScavTrap " + this->name + " attacks " + target + ", causing " + std::to_string(attackDamage) + " points of damage!" << std::endl;
		this->energy--;
	}
	else if (this->health == 0)
		std::cout << "ScavTrap " + name + "cannot deal damage because he is dead." << std::endl;
	else
		std::cout << "You need some energies!" << std::endl;
}