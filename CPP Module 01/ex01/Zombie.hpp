/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 01:23:49 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/11 22:07:10 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string Name;
	public:
		Zombie();
		~Zombie();
		void		announce(void);
		void		setName(std::string);
		std::string	getName(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
