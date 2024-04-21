/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 00:11:21 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/19 12:07:58 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Name Constructor called!" << std::endl;
	this->name = name;
	health = 10;
	energy = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &other)
{
	std::cout << "ClapTrap Copy Constructor Called!" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy Assignment Operator Called!" << std::endl;
	this->name = other.name;
	this->health = other.health;
	this->energy = other.energy;
	this->attackDamage = other.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called!" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->health != 0 && this->energy != 0)
	{
		std::cout << "ClapTrap " + this->name + " attacks " + target + ", causing " + std::to_string(attackDamage) + " points of damage!" << std::endl;
		this->energy--;
	}
	else if (this->health == 0)
		std::cout << "Claptrap " + name + "cannot deal damage because he is dead." << std::endl;
	else
		std::cout << "You need some energies!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->health == 0)
	{
		std::cout << "ClapTrap " + this->name + " is already dead" << std::endl;
		return ;
	}
	if (amount > (unsigned int)this->health)
		amount = this->health;
	std::cout << "ClapTrap " + this->name + " taken " + std::to_string(amount) << " damage!" << std::endl;
	this->health -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy != 0 &&  this->health != 0)
	{
		this->health += amount;
		std::cout << "Claptrap " + this->name + " healed " + std::to_string(amount) + " points" << std::endl;
		this->energy--;
	}
	else if (this->health == 0)
		std::cout << "Claptrap " + this->name + " can't healed. Because it is dead!" << std::endl;
	else if (this->energy == 0)
		std::cout << "Claptrap " + this->name + " can't healed. Because it hasn't any energy points!" << std::endl;
}
