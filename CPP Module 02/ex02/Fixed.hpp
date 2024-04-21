/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 00:50:11 by gotunc            #+#    #+#             */
/*   Updated: 2024/03/23 05:18:23 by gotunc           ###   ########.fr       */
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
		Fixed&			operator=(const Fixed &other);
		bool			operator>( const Fixed &rhs ) const ;
		bool			operator<( const Fixed &rhs ) const ;
		bool			operator>=( const Fixed &rhs ) const ;
		bool			operator<=( const Fixed &rhs ) const ;
		bool			operator==( const Fixed &rhs ) const ;
		bool			operator!=( const Fixed &rhs ) const ;
		float			operator+(Fixed const &rhs);
		float			operator-(Fixed const &rhs);
		float			operator*(Fixed const &rhs);
		float			operator/(Fixed const &rhs);
		Fixed&			operator++( void );
		Fixed			operator++( int );
		Fixed&			operator--( void );
		Fixed			operator--( int );
		static			Fixed& min( Fixed &a, Fixed &b );
		static			const Fixed& min( const Fixed &a, const Fixed &b );
		static			Fixed& max( Fixed &a, Fixed &b );
		static			const Fixed& max( const Fixed &a, const Fixed &b );
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
};

std::ostream&	operator<<( std::ostream &o, Fixed const &other);

#endif
