/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:20:46 by vandre            #+#    #+#             */
/*   Updated: 2024/09/03 00:15:17 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    public:
		HumanA(std::string name , Weapon &weapon);
		void attack();
    private:
		std::string A_name;
		Weapon &A_weapon;
};