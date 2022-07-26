/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 22:17:55 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/25 17:18:28 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap calling constructor" << ::std::endl;
	_name = "";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamange = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap calling constructor" << ::std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamange = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap calling destructor" << ::std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << getName();
	std::cout << " attack "	<< target << ", causing ";
	std::cout << getEnergyPoints() << " points of damange!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap have entered in Gate keeper mode" << std::endl;
}