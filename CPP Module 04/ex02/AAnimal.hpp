/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 00:43:54 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/25 00:43:56 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal(void);
		AAnimal(AAnimal& s);
		AAnimal &operator=(const AAnimal &other);
		virtual ~AAnimal(void);
		virtual void makeSound(void) = 0;
		std::string getType(void);
};

#endif