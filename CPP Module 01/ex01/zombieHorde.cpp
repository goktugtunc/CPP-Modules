/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 01:27:54 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/11 01:31:28 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *retzombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		retzombie[i].setName(name);
	}
	return (retzombie);
}
