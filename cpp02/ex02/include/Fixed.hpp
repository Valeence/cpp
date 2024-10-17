/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:02:45 by vandre            #+#    #+#             */
/*   Updated: 2024/09/09 01:59:00 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>


class Fixed
{
	private:
                static const int	_bits = 8;
                int		        _value;

	public:
                Fixed();
                Fixed(int const k);
                Fixed(float const f);
				Fixed(Fixed const &copy);
                ~Fixed();
                int getRawBits(void) const;
                void setRawBits( int const raw );
                float toFloat( void ) const;
                int toInt( void ) const;
                static Fixed min(int &ref1, int &ref2);
                static Fixed min(const Fixed &ref1, const Fixed &ref2);
                static Fixed max(Fixed &ref1, Fixed &ref2);
                static Fixed max(const Fixed &ref1, const Fixed &ref2);
                Fixed &operator=(Fixed const &other) throw();
                bool operator>(const Fixed &other) const;
                bool operator<(const Fixed &other) const;
                bool operator>=(const Fixed &other) const;
                bool operator<=(const Fixed &other) const;
                bool operator==(const Fixed &other) const;
                bool operator!=(const Fixed &other) const;
                
                Fixed &operator*(const Fixed&other) const throw();
                Fixed &operator++(); 
                Fixed operator++(int); 
                Fixed &operator--();  
                Fixed operator--(int); 
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif