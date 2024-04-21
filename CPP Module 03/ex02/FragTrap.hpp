/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 02:08:22 by gotunc            #+#    #+#             */
/*   Updated: 2024/03/28 15:25:17 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		FragTrap(void);
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap &other);
		FragTrap &operator=(const FragTrap &other);
		~FragTrap(void);
		void highFivesGuys(void);
};

#endif
