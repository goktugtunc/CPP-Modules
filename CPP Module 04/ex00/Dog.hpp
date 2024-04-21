/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:51:41 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/21 01:00:55 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"


class Dog: public Animal
{
	public:
		Dog(void);
		Dog(Dog& s);
		Dog &operator=(const Dog &other);
		~Dog(void);
		void makeSound(void);
};

#endif