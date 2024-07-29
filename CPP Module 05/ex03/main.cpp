/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 00:43:01 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/26 17:19:22 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern		bob;
	AForm		*form;
	Bureaucrat	karen("Karen", 50);

	try
	{
		form = bob.makeForm("robotomy request form", "Alice");
		delete form;
		form = bob.makeForm("shrubbery creation form", "Charlie");
		delete form;
		form = bob.makeForm("presidential pardon form", "David");
		delete form;
		form = bob.makeForm("random request form", "Elisa");
		delete form;
	}
	catch (Intern::InvalidFormException &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	std::cout << "------------------------------------" << std::endl;
	form = bob.makeForm("shrubbery creation form", "Fred");
	form->beSigned(karen);
	karen.execute(*form);
	delete form;
	std::cout << "------------------------------------" << std::endl;
	form = bob.makeForm("presidential pardon form", "Georgia");
	try
	{
		karen.signForm(*form);
		karen.execute(*form);
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	delete form;
	return (0);
}
