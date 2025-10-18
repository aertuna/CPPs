/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:07:11 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/30 16:10:59 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    std::cout << "===== SCAVTRAP TESTS =====" << std::endl;

    ScavTrap scav1("Guardian");
    ScavTrap scav2("Defender");
    ScavTrap scav3(scav1);
    ScavTrap scav4;
    scav4 = scav2;

    std::cout << std::endl;

    scav1.attack("Intruder");
    scav1.takeDamage(50);
    scav1.beRepaired(20);
    scav1.guardGate();
    
    std::cout << std::endl;
    
    std::cout << "===== SCAVTRAP ENERGY CONSUMPTION TEST =====" << std::endl;
    for (int i = 0; i < 50; i++) {
        scav1.attack("EnemyBot");
    }
    scav1.attack("Final Target");
    scav1.guardGate();

    std::cout << std::endl;
    std::cout << "===== TESTS COMPLETED =====" << std::endl;
    
    return 0;
}
