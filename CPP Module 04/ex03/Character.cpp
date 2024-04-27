/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:19:30 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/26 22:28:41 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character Default Constructor Called!" << std::endl;
}

Character::Character(std::string name)
{
	std::cout << "Character Name Constructor Called!" << std::endl;
	this->Name = name;
	for (int i = 0; i < 4; i++)
	{
		this->Inventory[i] = 0;
	}
}

Character::Character(Character &other)
{
	std::cout << "Character Copy Constructor Called!" << std::endl;
	*this = other;
}

Character &Character::operator=(Character &other)
{
	std::cout << "Character Copy Assign Called!" << std::endl;
	this->Name = other.Name;
	for (int i = 0; i < 4; i++)
	{
		if (other.Inventory[i] != 0)
			this->Inventory[i] = other.Inventory[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->Name);
}

void Character::equip(AMateria *m)
{
	bool condition = false;
	int s = -1;
	for (int i = 0; i < 4; i++)
	{
		if (this->Inventory[i] == 0 && m != 0)
		{
			this->Inventory[i] = m->clone();
			s = i;
			condition = true;
			break ;
		}
	}
	if (condition == true)
		std::cout << m->getType() + " Object Added " + std::to_string(s) + ". index!" << std::endl;
	else
		std::cout << "All indexes full! This equipment not added!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "This index value wrong!" << std::endl;
		return ;
	}
	if (this->Inventory[idx] == 0)
		std::cout << "This index value allready empty!" << std::endl;
	else
	{
		std::cout << std::to_string(idx) + ". index unequiped!" << std::endl;
		delete this->Inventory[idx];
		this->Inventory[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "This index value wrong!" << std::endl;
		return ;
	}
	if (this->Inventory[idx] == 0)
		std::cout << "This index empty!" << std::endl;
	else
		this->Inventory[idx]->use(target);
}

AMateria *Character::getMateriaFromInventory(int i)
{
	return (this->Inventory[i]->clone());
}

Character::~Character()
{
	std::cout << "Character Destructor Called!" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->Inventory[i] != 0)
			delete this->Inventory[i];
}