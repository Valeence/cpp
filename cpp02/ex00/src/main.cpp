/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:02:31 by vandre            #+#    #+#             */
/*   Updated: 2024/09/06 15:33:52 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;
	
	a.getRawBits();
	b.getRawBits();
	c.getRawBits();
}
