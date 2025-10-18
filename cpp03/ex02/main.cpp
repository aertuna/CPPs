/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:07:11 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/30 16:10:51 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "===== FRAGTRAP TESTS =====" << std::endl;

    FragTrap frag1("Bomber");
    FragTrap frag2("Exploder");
    FragTrap frag3(frag1);
    FragTrap frag4;
    frag4 = frag2;

    std::cout << std::endl;

    frag1.attack("EnemyBot");
    frag1.takeDamage(40);
    frag1.beRepaired(30);
    frag1.highFivesGuys();

    std::cout << std::endl;

    std::cout << "===== FRAGTRAP ENERGY CONSUMPTION TEST =====" << std::endl;
    for (int i = 0; i < 100; i++) {
        frag1.attack("Final Boss");
    }
    frag1.attack("Final Attack");
    frag1.highFivesGuys();

    std::cout << std::endl;
    std::cout << "===== TESTS COMPLETED =====" << std::endl;
    
    return 0;
}
