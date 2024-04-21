/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 00:10:48 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/19 23:05:36 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap s("Ben Stone");

	s.attack("Angelina");
	s.attack("Angelina");
	s.takeDamage(500);
	s.takeDamage(500);
	s.beRepaired(500);
	s.takeDamage(500);
	s.takeDamage(1);
	std::cout << "------- CLAPTRAP -------" << std::endl;
	ClapTrap *b = new ClapTrap("omg Clap");
	delete b;
	std::cout << "------- SCAVTRAP -------" << std::endl;
	ScavTrap *a = new ScavTrap("omg Scav");
	delete a;
	std::cout << "------- FINISH -------" << std::endl;
}
