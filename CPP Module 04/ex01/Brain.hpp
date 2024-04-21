/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:37:30 by gotunc            #+#    #+#             */
/*   Updated: 2024/04/21 01:54:13 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	public:
		std::string *ideas;
		Brain(void);
		Brain(Brain& s);
		Brain &operator=(const Brain &other);
		virtual ~Brain(void);
};

#endif