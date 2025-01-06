/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 20:27:17 by vandre            #+#    #+#             */
/*   Updated: 2025/01/01 19:22:22 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data data = {42, "vandre"};
    Data* ptr = &data;
    
    std::cout << &data << std::endl;
    std::cout << ptr << std::endl;
    std::cout << std::endl;

    uintptr_t raw = Serializer::serialize(ptr);
    std::cout << raw << std::endl;
    std::cout << std::endl;
    Data * res = Serializer::deserialize(raw);
    
    std::cout << res << std::endl;
    std::cout << &res << std::endl;
    if (ptr == res) {
        std::cout << "test passed" << std::endl;
        std::cout << res->age << std::endl;
        std::cout << res->name << std::endl;
    }
    else 
        std::cout << "test failled" << std::endl;
    return 0;
}
