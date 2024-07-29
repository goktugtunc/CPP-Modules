/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 00:43:07 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/29 15:35:33 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(Bureaucrat &other): name(other.getName())
{
	std::cout << "Bureaucrat Created!" << std::endl;
	this->setGrade(other.getGrade());
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &other)
{
	this->setGrade(other.grade);
	return (*this);
}

Bureaucrat::Bureaucrat(void): name("Default")
{
	std::cout << "Bureaucrat Created!" << std::endl;
	this->setGrade(150);
}

Bureaucrat::Bureaucrat(std::string nm): name(nm)
{
	std::cout << "Bureaucrat Created!" << std::endl;
	this->setGrade(150);
}

Bureaucrat::Bureaucrat(int level): name("Default")
{
	std::cout << "Bureaucrat Created!" << std::endl;
	this->setGrade(level);
}

Bureaucrat::Bureaucrat(std::string nm, int level): name(nm)
{
	std::cout << "Bureaucrat Created!" << std::endl;
	this->setGrade(level);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << this->name << " Destructor Called!" << std::endl;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::setGrade(int level)
{
	if (level > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (level < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = level;
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

void	Bureaucrat::incrementGrade(void)
{
	this->setGrade(this->grade - 1);
}

void	Bureaucrat::decrementGrade(void)
{
	this->setGrade(this->grade + 1);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat *bur)
{
	o << "Bureaucrat Name: " << bur->getName() << std::endl << "Bureaucrat Grade: " << bur->getGrade() << std::endl;
	return (o);
}

void	Bureaucrat::signForm(AForm &form)
{
	form.beSigned(*this);
}

void	Bureaucrat::execute(AForm &form)
{
	form.execute(*this);
}
