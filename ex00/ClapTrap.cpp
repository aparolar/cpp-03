/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:08:22 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/18 18:39:08 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{

}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamange(0)
{
	std::cout << "Calling constructor from " << _name << ::std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Calling destructor from " << _name << ::std::endl;
}

std::string ClapTrap::getName(void) const
{
	return (_name);
}

int ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

int ClapTrap::getAttactDamange(void) const
{
	return (_attackDamange);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name;
	std::cout << " attack "	<< target << ", causing ";
	std::cout << _attackDamange << " points of damange!" << std::endl;
}

void ClapTrap::takeDamange(unsigned int amount)
{
	_energyPoints -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damange" << std::endl;
	if (_energyPoints <= 0)
	{
		_energyPoints = 0;
		std::cout << "ClapTrap " << _name << " die cannot be repared" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints)
	{
		_energyPoints += amount;
		std::cout << "ClapTrap " << this->_name << " repaired " << amount << " energy points" << std::endl;	
	}
	else
		std::cout << "ClapTrap " << this->_name << " is dead cannot be repared" << std::endl;	
}