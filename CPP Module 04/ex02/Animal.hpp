/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:52:25 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/25 00:25:03 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(Animal& s);
		Animal &operator=(const Animal &other);
		virtual ~Animal(void);
		virtual void makeSound(void);
		std::string getType(void);
};

#endif