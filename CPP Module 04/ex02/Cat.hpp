/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:51:36 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/25 00:40:05 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain *brain;
	public:
		Cat(void);
		Cat(Cat& s);
		Cat &operator=(const Cat &other);
		~Cat(void);
		void makeSound(void);
		void compareTo(Cat const & other_cat) const;
};

#endif