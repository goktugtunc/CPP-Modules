/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 02:24:03 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/29 15:32:27 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): name("Default"), isSigned(false), signGrade(150), executeGrade(150)
{
	std::cout << "Form Created!" << std::endl;
}

Form::Form(std::string exName, int exSignGrade, int exExecutorGrade): name(exName), isSigned(false), signGrade(exSignGrade), executeGrade(exExecutorGrade)
{
	if (this->signGrade > 150 || this->executeGrade > 150)
		throw Form::GradeTooLowException();
	else if (this->signGrade < 1 || this->executeGrade < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form Created!" << std::endl;
}

Form::Form(Form &other): name(other.getName()), isSigned(other.getSignStatus()), signGrade(other.getSignGrade()), executeGrade(other.getExecutorGrade())
{
	if (this->signGrade > 150 || this->executeGrade > 150)
		throw Form::GradeTooLowException();
	else if (this->signGrade < 1 || this->executeGrade < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form Created!" << std::endl;
}

std::string	Form::getName(void)
{
	return (this->name);
}

int	Form::getSignGrade(void)
{
	return (this->signGrade);
}

int	Form::getExecutorGrade(void)
{
	return (this->executeGrade);
}

bool	Form::getSignStatus(void)
{
	return (this->isSigned);
}

Form::~Form(void)
{
	std::cout << "Form Destructor Called!" << std::endl;
}

void	Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else if (this->isSigned == true)
		std::cout << bur.getName() << " couldn't sign " << this->getName() <<  " because form already signed!" << std::endl;
	else
	{
		this->isSigned = true;
		std::cout << bur.getName() << " signed " << this->getName() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &o, Form &form)
{
	o << "Form Name: " << form.getName() << std::endl << "Form Sign Status: " << form.getSignStatus() << std::endl << "Form Sign Grade: " << form.getSignGrade() << std::endl << "Form Execute Grade: " << form.getExecutorGrade() << std::endl;
	return (o);
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High!");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low!");
}
