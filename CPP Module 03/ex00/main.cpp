/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 00:10:48 by gotunc            #+#    #+#             */
/*   Updated: 2024/03/28 15:37:03 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap s("Goktug");

	s.attack("Enes");
	s.takeDamage(100);
	s.beRepaired(3);
	s.takeDamage(0);
	s.takeDamage(5);
}
