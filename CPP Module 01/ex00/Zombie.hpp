/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 00:58:52 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/11 22:06:16 by gotunc           ###   ########.fr       */
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

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
