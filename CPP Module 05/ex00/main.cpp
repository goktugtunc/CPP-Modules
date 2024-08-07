/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 00:43:01 by gotunc            #+#    #+#             */
/*   Updated: 2024/07/24 20:07:04 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "GENERAL" << std::endl;
	{
		Bureaucrat	a("Ana", 87);
		Bureaucrat	b(a);
		Bureaucrat	c = b;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "TEST 1" << std::endl;
		try
		{
			Bureaucrat	a("A", 150 + 1);
			std::cout << a << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;

		std::cout << "TEST 2" << std::endl;
		try
		{
			Bureaucrat	b("B", 1 - 1);
			std::cout << b << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;

		std::cout << "TEST 3" << std::endl;
		try
		{
			Bureaucrat	c("C", 1);

			c.incrementGrade();
			std::cout << c << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;

		std::cout << "TEST 4" << std::endl;
		try
		{
			Bureaucrat	d("D", 150);

			d.decrementGrade();
			std::cout << d << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;

		std::cout << "TEST 5" << std::endl;
		try 
		{
			Bureaucrat	ebil("EBIL", 10);

			ebil.decrementGrade();
			std::cout << ebil << std::endl;
			ebil.incrementGrade();
			std::cout << ebil << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return EXIT_SUCCESS;
}
