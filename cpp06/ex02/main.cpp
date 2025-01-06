/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 20:13:10 by vandre            #+#    #+#             */
/*   Updated: 2025/01/02 02:27:55 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* generate()
{
	srand (time(NULL));
	int i = rand() % 3;
	switch(i)
	{
		case 0:
			std::cout << "Class A generée" << std::endl;
			return  new A();
		case 1:
			std::cout << "Class B generée" << std::endl;
			return  new B();
		case 2:
			std::cout << "Class C generée" << std::endl;
			return new C();
		default:
			return NULL;
	}
}

void identify(Base* p) { //dynamic cast renvoi null si echec
    if (dynamic_cast<A*>(p)) {
        std::cout << "Type: A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "Type: B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "Type: C" << std::endl;
    } else {
        std::cout << "Type: Unknown" << std::endl;
    }
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "Type: A" << std::endl;
        return;
    } catch (...) {}

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "Type: B" << std::endl;
        return;
    } catch (...) {}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "Type: C" << std::endl;
        return;
    } catch (...) {}

    std::cout << "Type: Unknown" << std::endl;
}

int main()
{
	Base* obj = generate();
	identify(obj);
	identify(*obj);
	delete (obj);
	return 0;
}