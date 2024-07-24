/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 00:43:01 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/24 20:12:34 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat hermano("Hermano", 150);

	Bureaucrat ebil("Ebil", 1);
	std::cout << std::endl;

	std::cout << std::endl;
	ShrubberyCreationForm scf("Ebil");
	PresidentialPardonForm ppf("Ebil");
	RobotomyRequestForm rrf("Ebil");
	std::cout << std::endl;

	ebil.execute(scf);
	scf.beSigned(ebil);
	ebil.execute(scf);

	std::cout << std::endl;

	ebil.execute(ppf);
	ppf.beSigned(ebil);
	ebil.execute(ppf);

	std::cout << std::endl;

	ebil.execute(rrf);
	rrf.beSigned(ebil);
	ebil.execute(rrf);

	std::cout << std::endl;

	std::cout << &hermano << std::endl;
	
	try
	{
		ebil.incrementGrade();
		hermano.execute(scf);
	}
		catch (Bureaucrat::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}
		catch (AForm::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (AForm::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}

	std::cout << std::endl;
	return EXIT_SUCCESS;
}
