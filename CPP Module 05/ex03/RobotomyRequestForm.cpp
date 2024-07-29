/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:07:08 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/29 15:45:04 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
	std::cout << "Robotomy Request Form Created!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", target, 72, 45)
{
	std::cout << "Robotomy Request Form Created!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other): AForm(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecutorGrade())
{
	std::cout << "Robotomy Request Form Created!" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &other)
{
	return (other);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Robotomy Request Form Destructor Called!" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getExecutorGrade())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getSignStatus() == false)
		std::cerr << "RobotomyRequestForm couldn't be executed by " << executor.getName() << " because it wasn't signed!" << std::endl;
	else
	{
		std::srand(std::time(0));

		std::cout << "(Loud drill noises) " << std::endl;

		if (std::rand() % 2 == 0)
			std::cout << this->getTarget() << " successfully robotomized." << std::endl;
		else
			std::cout << this->getTarget() << " failed when trying to robotimize." << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm &other)
{
	o << "Name: " << other.getName() << std::endl << "Target: " << other.getTarget() << std::endl << "Sign Status: " << other.getSignStatus() << std::endl << "Sign Grade: " << other.getSignGrade() << std::endl << "Execute Grade: " << other.getExecutorGrade() << std::endl;
	return (o);
}
