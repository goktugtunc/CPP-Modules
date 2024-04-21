/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 01:31:34 by gotunc            #+#    #+#             */
/*   Updated: 2024/01/11 01:35:40 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*mynewzombie;
	int		N = 5;

	mynewzombie = zombieHorde(N, "Alex");
	for (int i = 0; i < N; i++)
	{
		mynewzombie[i].announce();
	}
	delete[] mynewzombie;
	return (0);
}