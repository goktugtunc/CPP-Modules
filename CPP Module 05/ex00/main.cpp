/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:38:41 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/27 17:32:04 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("a", 150);
	try
	{
		while (1)
		{
			std::cout << a.getName() + " ";
			std::cout << a.getGrade() << std::endl;
			a.increaseGrade();
		}
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << a.getGrade() << std::endl;
	} // testler oluşturulacak
}
