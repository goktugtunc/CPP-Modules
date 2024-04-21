/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:40:46 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/11 22:09:16 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*weapon;
		std::string	name;
	public:
		HumanB();
		HumanB(std::string);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &wp);
};

#endif