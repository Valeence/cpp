/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:45:52 by vandre            #+#    #+#             */
/*   Updated: 2024/09/12 18:59:46 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
        Dog();
		virtual ~Dog();
		virtual void makeSound() const;
	private:
		Brain* _brain;
};