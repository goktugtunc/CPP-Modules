/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 00:10:48 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/19 23:04:29 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap s("Ben Stone");

	s.attack("Angelina");
	s.attack("Angelina");
	s.takeDamage(500);
	s.takeDamage(500);
	s.beRepaired(500);
	s.takeDamage(500);
	s.takeDamage(1);
	s.highFivesGuys();
	std::cout << "------- CLAPTRAP -------" << std::endl;
	ClapTrap *clap = new ClapTrap("omg Clap");
	delete clap;
	std::cout << "------- SCAVTRAP -------" << std::endl;
	ScavTrap *scav = new ScavTrap("omg Scav");
	delete scav;
	std::cout << "------- FRAGTRAP -------" << std::endl;
	FragTrap *frag = new FragTrap("omg Frag");
	delete frag;
	std::cout << "------- FINISH -------" << std::endl;
}
