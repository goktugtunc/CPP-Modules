/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 23:41:57 by gotunc            #+#    #+#             */
/*   Updated: 2024/03/23 03:04:39 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>


class Fixed
{
	private:
		int	floatnum;
		static const int byte = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &copy);
		~Fixed(void);
		Fixed& operator=(const Fixed &other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};

#endif
