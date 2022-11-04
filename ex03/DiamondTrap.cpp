/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:30:21 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/04 09:40:32 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	_name = "default_clap_name";
	this->FragTrap::_hitPoints = FragTrap::_hitPoints;
	this->ScavTrap::_energyPoints = ScavTrap::_energyPoints;
	this->FragTrap::_attackDamange = FragTrap::_attackDamange;
}

DiamondTrap::DiamondTrap(DiamondTrap const &toCopy) : _name(toCopy._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = toCopy;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	std::cout << "DiamondTrap constructor called from " << getName() << std::endl;
	this->ClapTrap::_name = _name + "_clap_name";
	this->FragTrap::_hitPoints = FragTrap::_hitPoints;
	this->ScavTrap::_energyPoints = ScavTrap::_energyPoints;
	this->FragTrap::_attackDamange = FragTrap::_attackDamange;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called from " << getName() << std::endl;
}

DiamondTrap&	DiamondTrap::operator = (DiamondTrap const &toCopy)
{
	this->_name = toCopy._name;
	this->ClapTrap::_name = toCopy.ClapTrap::_name;
	this->FragTrap::_hitPoints = FragTrap::_hitPoints;
	this->ScavTrap::_energyPoints = ScavTrap::_energyPoints;
	this->FragTrap::_attackDamange = FragTrap::_attackDamange;
	return *this;
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
	std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
}
