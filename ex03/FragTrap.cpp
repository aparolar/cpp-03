/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:33:29 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/04 09:24:34 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamange = 30;
	std::cout << "FragTrap default construtor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &toCopy) :ClapTrap(toCopy)
{
	std::cout << "FragTrap calling Copy constructor from " << getName() << ::std::endl;
	*this = toCopy;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamange = 30;
	std::cout << "FragTrap calling constructor from " << getName() << ::std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap calling destructor from " << getName() << ::std::endl;
}

FragTrap&	FragTrap::operator = (FragTrap const &toCopy)
{
	this->_name = toCopy.getName();
	this->_hitPoints = toCopy.getHitPoints();
	this->_energyPoints = toCopy.getEnergyPoints();
	this->_attackDamange = toCopy.getAttackDamange();
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys! Give me a high five!" << std::endl;
}

