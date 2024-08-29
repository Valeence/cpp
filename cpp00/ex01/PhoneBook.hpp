/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 03:12:53 by vandre            #+#    #+#             */
/*   Updated: 2024/08/03 04:39:59 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK
#include <iostream>
#include <string>

class PhoneBook
{
	public:

	PhoneBook();
	~PhoneBook();
	void ADD();
	void SEARCH();
	void EXIT();

	private:

	Contact m_contact;
};

class Contact
{
	public:

	private:
	std::string m_prenom;
	std::string m_nom;
	std::string m_nickname;
	std::string m_secret;
	unsigned int m_number;
};

#endif