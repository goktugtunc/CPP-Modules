/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 08:41:28 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/26 22:35:55 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "Materia Source Default Constructor Called!" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		Materias[i] = 0;
	}
}

MateriaSource::MateriaSource(MateriaSource &other)
{
	std::cout << "MateriaSource Copy Constructor Called!" << std::endl;
	*this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource &other)
{
	std::cout << "MateriaSource Copy Assign Called!" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->Materias[i] = other.Materias[i];
	}
	return (*this);
}

int MateriaSource::MateriasIsFull(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materias[i] == 0)
			return (0);
	}
	return (1);
}

void MateriaSource::learnMateria(AMateria *other)
{
	if (!MateriasIsFull())
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->Materias[i] == 0)
			{
				this->Materias[i] = other;
				break ;
			}
		}
	}
	else
		std::cout << "MateriaSource Class's Materias are full!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *ret = 0;
	for (int i = 0; i < 4; i++)
	{
		if (this->Materias[i] != 0)
			if (this->Materias[i]->getType() == type)
			{
				ret = this->Materias[i]->clone();
				break ;
			}
	}
	if (ret == 0)
		std::cout << "This type is not learning!" << std::endl;
	return (ret);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "Materia Source Destructor Called!" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->Materias[i] != 0)
			delete this->Materias[i];
}
