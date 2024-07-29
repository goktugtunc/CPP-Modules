/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 02:24:03 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/29 15:44:38 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void): name("Default"), isSigned(false), signGrade(150), executeGrade(150)
{
	std::cout << "Form Created!" << std::endl;
}

AForm::AForm(std::string exName, std::string targ, int exSignGrade, int exExecutorGrade): name(exName), target(targ), isSigned(false), signGrade(exSignGrade), executeGrade(exExecutorGrade)
{
	if (this->signGrade < 1 || this->executeGrade < 1)
		throw AForm::GradeTooHighException();
	else if (this->signGrade > 150 || this->executeGrade > 150)
		throw AForm::GradeTooLowException();
	std::cout << "Form Created!" << std::endl;
}

AForm::AForm(AForm &other): name(other.getName()), target(other.getTarget()), isSigned(other.getSignStatus()), signGrade(other.getSignGrade()), executeGrade(other.getExecutorGrade())
{
	if (this->signGrade < 1 || this->executeGrade < 1)
		throw AForm::GradeTooHighException();
	else if (this->signGrade > 150 || this->executeGrade > 150)
		throw AForm::GradeTooLowException();
	std::cout << "Form Created!" << std::endl;
}

std::string	AForm::getName(void) const
{
	return (this->name);
}

int	AForm::getSignGrade(void) const
{
	return (this->signGrade);
}

int	AForm::getExecutorGrade(void) const
{
	return (this->executeGrade);
}

bool	AForm::getSignStatus(void) const
{
	return (this->isSigned);
}

std::string	AForm::getTarget(void) const
{
	return (this->target);
}

AForm::~AForm(void)
{
	std::cout << "Form Destructor Called!" << std::endl;
}

void	AForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->getSignGrade())
	{
		throw AForm::GradeTooLowException();
	}
	else if (this->isSigned == true)
		std::cout << bur.getName() << " couldn't sign " << this->getName() <<  " because form already signed!" << std::endl;
	else
	{
		this->isSigned = true;
		std::cout << bur.getName() << " signed " << this->getName() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &o, AForm *form)
{
	o << "Form Name: " << form->getName() << std::endl << "Target: " << form->getTarget() << std::endl << "Form Sign Status: " << form->getSignStatus() << std::endl << "Form Sign Grade: " << form->getSignGrade() << std::endl << "Form Execute Grade: " << form->getExecutorGrade() << std::endl;
	return (o);
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade Too High!");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low!");
}
