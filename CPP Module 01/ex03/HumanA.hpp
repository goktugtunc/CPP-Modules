/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:36:48 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/11 22:09:06 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		*weapon;
		std::string	name;
	public:
		HumanA();
		HumanA(std::string, Weapon &wp);
		~HumanA();
		void	attack(void);
};

#endif