/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aertuna <aertuna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:07:11 by aertuna           #+#    #+#             */
/*   Updated: 2025/01/30 16:20:06 by aertuna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    std::cout << "===== TEST 1: Default Constructor and Parametrized Constructor =====" << std::endl;
    ClapTrap bot1;
    ClapTrap bot2("Alpha");
    std::cout << std::endl;

    std::cout << "===== TEST 2: Copy Constructor and Assignment Operator =====" << std::endl;
    ClapTrap bot3(bot2);
    ClapTrap bot4;
    bot4 = bot2;
    std::cout << std::endl;

    std::cout << "===== TEST 3: Attack and Energy Check =====" << std::endl;
    bot2.attack("EnemyBot");
    bot2.attack("EnemyBot");
    bot2.attack("EnemyBot");
    std::cout << std::endl;

    std::cout << "===== TEST 4: Taking Damage and Dying =====" << std::endl;
    bot2.takeDamage(5);
    bot2.takeDamage(3);
    bot2.takeDamage(2);
    bot2.attack("EnemyBot");
    bot2.beRepaired(3);
    std::cout << std::endl;

    std::cout << "===== TEST 5: Repairing and Energy Consumption =====" << std::endl;
    bot3.beRepaired(5);
    bot3.attack("TargetBot");
    bot3.beRepaired(3);
    std::cout << std::endl;

    std::cout << "===== TEST 6: Depleting Energy Completely =====" << std::endl;
    for (int i = 0; i < 10; i++) {
        bot4.attack("TestTarget");
    }
    bot4.attack("FinalAttack");
    bot4.beRepaired(2);
    std::cout << std::endl;

    std::cout << "===== TEST 7: Destructor Calls at Scope End =====" << std::endl;
    {
        ClapTrap tempBot("Temp");
        tempBot.attack("Dummy");
    }
    std::cout << std::endl;

    std::cout << "===== TEST COMPLETED =====" << std::endl;
    return 0;
}
