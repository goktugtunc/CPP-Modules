/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:07:03 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/24 20:19:52 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	std::cout << "Presidential Pardon Form Created!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", target, 25, 5)
{
	std::cout << "Presidential Pardon Form Created!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other): AForm(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecutorGrade())
{
	std::cout << "Presidential Pardon Form Created!" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm &other)
{
	return (other);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Presidential Pardon Form Destructor Called!" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm &other)
{
	o << "Name: " << other.getName() << std::endl << "Target: " << other.getTarget() << std::endl << "Sign Status: " << other.getSignStatus() << std::endl << "Sign Grade: " << other.getSignGrade() << std::endl << "Execute Grade: " << other.getExecutorGrade() << std::endl;
	return (o);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getExecutorGrade())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getSignStatus() == false)
		std::cerr << "PresidentialPardonForm couldn't be executed by " << executor.getName() << " because it wasn't signed!" << std::endl;
	else
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
