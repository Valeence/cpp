/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 02:50:22 by vandre            #+#    #+#             */
/*   Updated: 2025/01/03 23:20:04 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void changeArray(T& element)
{
	element = 'a';
}

template<typename T, typename F>
void iter(T* array, size_t lenght, F func)
{
	for (size_t i = 0 ; i < lenght ; i++) {
		func(array[i]);
	}
}

#endif