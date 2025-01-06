/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 23:32:04 by vandre            #+#    #+#             */
/*   Updated: 2025/01/01 04:30:34 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include <string>
#include <iostream>


struct Data {
	int age;
	std::string name;
};

class Serializer
{
	private:
		Serializer();
		Serializer &operator=(const Serializer &cpy);
		Serializer(const Serializer &cpy);
		virtual ~Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif