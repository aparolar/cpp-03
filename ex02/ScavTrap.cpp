/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 22:17:55 by aparolar          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/11/02 17:44:05 by aparolar         ###   ########.fr       */
=======
/*   Updated: 2022/10/11 13:57:32 by aparolar         ###   ########.fr       */
>>>>>>> 7406f753f0410b433047dac9a9b94f2687d62742
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(ScavTrap const &toCopy) : ClapTrap(toCopy)
{
	std::cout << "ScavTrap calling copy constructor from " << getName() << ::std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap calling constructor from " << getName() << ::std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap calling destructor from " << getName() << ::std::endl;
}

ScavTrap& ScavTrap::operator = (ScavTrap const &toCopy)
{
	this->_name = toCopy.getName();
	this->_hitPoints = toCopy.getHitPoints();
	this->_energyPoints = toCopy.getEnergyPoints();
	this->_attackDamange = toCopy.getAttackDamange();
	return *this;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << getName() << " attack "	<< target << ", causing " << getEnergyPoints() << " points of damange!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap have entered in Gate keeper mode" << std::endl;
}

