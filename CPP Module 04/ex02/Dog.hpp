/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:51:41 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/25 09:43:13 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"


class Dog: public AAnimal
{
	private:
		Brain *brain;
	public:
		Dog(void);
		Dog(Dog& s);
		Dog &operator=(Dog const &other);
		~Dog(void);
		void makeSound(void);
		void compareTo(Dog const & other_dog) const;
};

#endif