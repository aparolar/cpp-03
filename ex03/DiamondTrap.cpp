/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:30:21 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/26 10:59:45 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	std::cout << "DiamondTrap constructor called from " << getName() << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamange = FragTrap::_attackDamange;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called from " << getName() << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

std::string DiamondTrap::getName()
{
	return (_name);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << getName() << std::endl;
	std::cout << "ClaptTrap name: " << ClapTrap::getName() << std::endl;
}