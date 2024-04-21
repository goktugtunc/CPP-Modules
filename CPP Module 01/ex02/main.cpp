/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 01:37:25 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/12 14:29:41 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string deneme = "deneme";
	std::string	*ptrstr = &str;
	std::string	&rfrstr = str;

	std::cout << "String's Memory Adress: " << &str << std::endl;
	std::cout << "Pointer String's Memory Adress: " << ptrstr << std::endl;
	std::cout << "Reference String's Memory Adress: " << &rfrstr << std::endl;

	std::cout << "String's Value: " << str << std::endl;
	std::cout << "Pointer String's Value: " << *ptrstr << std::endl;
	std::cout << "Reference String's Value: " << rfrstr << std::endl;
}
