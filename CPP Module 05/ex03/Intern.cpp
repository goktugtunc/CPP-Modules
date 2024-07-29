/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:31:27 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/26 18:33:53 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Created!" << std::endl;
}

void	lowerCase(std::string &words)
{
	for (unsigned long i = 0; i < words.length(); i++)
		words[i] = std::tolower(words[i]);
}

AForm	*ifPresidentalPardonForm(std::string formType, std::string formName, AForm *form)
{
	if (form == NULL && formType == "presidentialpardonform")
		return (new PresidentialPardonForm(formName));
	return (form);
}

AForm	*ifRobotomyRequestForm(std::string formType, std::string formName, AForm *form)
{
	if (form == NULL && formType == "robotomyrequestform")
		return (new RobotomyRequestForm(formName));
	return (form);
}

AForm	*ifShrubberyCreationForm(std::string formType, std::string formName, AForm *form)
{
	if (form == NULL && formType == "shrubberycreationform")
		return (new ShrubberyCreationForm(formName));
	return (form);
}

AForm	*Intern::makeForm(std::string formType, std::string formName)
{
	AForm	*form;
	lowerCase(formType);
	formType.erase(std::remove(formType.begin(), formType.end(), ' '), formType.end());
	form = NULL;
	form = ifPresidentalPardonForm(formType, formName, form);
	form = ifRobotomyRequestForm(formType, formName, form);
	form = ifShrubberyCreationForm(formType, formName, form);
	if (!form)
		throw (Intern::InvalidFormException());
	else
		std::cout << "Intern creates form: " << form->getName() << " with target: " << form->getTarget() << std::endl;
	return (form);
}

const char *Intern::InvalidFormException::what(void) const throw()
{
	return ("Form not created!");
}

Intern::Intern(Intern &other)
{
	*this = other;
	std::cout << "Intern Created!" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern Deleted!" << std::endl;
}
