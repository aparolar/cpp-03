/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:33:29 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/25 17:18:00 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap calling constructor" << ::std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap calling constructor" << ::std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap calling destructor" << ::std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys! Give me a high five!" << std::endl;
}