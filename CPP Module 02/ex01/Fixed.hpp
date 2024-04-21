/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 00:50:11 by gotunc            #+#    #+#             */
/*   Updated: 2024/03/23 03:28:21 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	floatnum;
		static const int byte = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &copy);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed(void);
		Fixed& operator=(const Fixed &other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<( std::ostream &o, Fixed const &other);

#endif
