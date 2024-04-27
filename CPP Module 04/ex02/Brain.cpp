/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:41:03 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/21 02:12:47 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor Called!" << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "Ex01";
	}
}

Brain::Brain(Brain& s)
{
	std::cout << "Brain Copy Constructor Called!" << std::endl;
	*this = s;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain Copy Assignment Operator Called!" << std::endl;
	for (unsigned long i = 0; i < this->ideas->length(); i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor Called" << std::endl;
	delete[] this->ideas;
}
