/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 19:26:11 by vandre            #+#    #+#             */
/*   Updated: 2025/01/01 23:13:56 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define  BASE_HPP

#include <string>
#include <stdlib.h>
#include <time.h> 
#include <iostream>

class Base
{
	public :
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif