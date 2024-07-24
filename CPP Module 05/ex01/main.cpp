/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 00:43:01 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/24 20:11:01 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "GENERAL" << std::endl;
	{
		// Constructor
		Form	a("Contract", 42, 42);
		// Copy Constructor
		Form	b(a);
		// Copy assignment
		Form	c = b;

		// ostream overload
		std::cout << "a:\n" << a << std::endl;
		std::cout << "b:\n" << b << std::endl;
		std::cout << "c:\n" << c << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "TEST 1" << std::endl;
		try
		{
			Form	a("A", 150 + 1, 150 - 1);
			std::cout << a << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Form::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;

		std::cout << "TEST 2" << std::endl;
		try
		{
			// Grade too high
			Form	b("B", 1 - 1, 42);
			std::cout << b << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Form::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;

		std::cout << "TEST 3" << std::endl;
		try
		{
			// Able to sign all forms
			Bureaucrat	s1("Student1", 1);
			std::cout << s1 << std::endl;

			Form	c1("C1", 1, 2);
			Form	c2("C2", 90, 150);
			std::cout << c1 << std::endl;
			std::cout << c2 << std::endl;

			c1.beSigned(s1);
			c2.beSigned(s1);
			c1.beSigned(s1);

			std::cout << c1 << std::endl;
			std::cout << c2 << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Form::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;

		std::cout << "TEST 4" << std::endl;
		try
		{
			// Unable to sign any form
			Bureaucrat	s2("Student2", 150);
			std::cout << s2 << std::endl;

			Form	c3("C3", 1, 2);
			std::cout << c3 << std::endl;

			// Exception will be thrown
			c3.beSigned(s2);
			std::cout << c3 << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Form::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Form::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return EXIT_SUCCESS;
}
