/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:33:29 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/19 12:32:28 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap calling constructor from " << getName() << ::std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap calling destructor from " << getName() << ::std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys! Give me a high five!" << std::endl;
}