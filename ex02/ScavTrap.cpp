/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 22:17:55 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/02 17:44:05 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap calling constructor from " << getName() << ::std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap calling destructor from " << getName() << ::std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << getName() << " attack "	<< target << ", causing " << getEnergyPoints() << " points of damange!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap have entered in Gate keeper mode" << std::endl;
}

