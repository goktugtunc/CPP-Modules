/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:38:39 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/27 17:29:23 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string Name, int level) : name(Name), grade(level)
{
	if (this->grade < 1 || this->grade > 150)
	{
		if (this->grade < 1)
			GradeTooHighException();
		else
			GradeTooLowException();
		
	}
	std::cout << "Bureaucrat Created!" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &other)
{
	std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &other)
{
	std::cout << "Bureaucrat Copy Assign  Called!" << std::endl;
	this->grade = other.grade;
	return (*this);
}

int Bureaucrat::getGrade()
{
	return (this->grade);
}

std::string Bureaucrat::getName()
{
	return (this->name);
}

void Bureaucrat::GradeTooHighException()
{
	throw std::invalid_argument("Grade Too High!");
}

void Bureaucrat::GradeTooLowException()
{
	throw std::invalid_argument("Grade Too Low!");
}

void Bureaucrat::increaseGrade()
{
	if (this->getGrade() == 1)
		GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decreaseGrade()
{
	if (this->getGrade() == 150)
		GradeTooLowException();
	this->grade++;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor Called!" << std::endl;
}
