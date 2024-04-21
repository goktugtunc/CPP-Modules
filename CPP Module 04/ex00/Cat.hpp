/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:51:36 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/21 01:00:43 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(Cat& s);
		Cat &operator=(const Cat &other);
		~Cat(void);
		void makeSound(void);
};

#endif