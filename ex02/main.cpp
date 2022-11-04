/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:07:29 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/04 09:58:32 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "-----ClapTrap-----" << std::endl;
	ClapTrap	a("ChuckNorris");
	a.takeDamange(4);
	a.takeDamange(3);
	a.beRepaired(4);
	a.attack("BobEsponja");

	std::cout << "-----ScavTrap-----" << std::endl;
	ScavTrap	b("MarioPirulo");
	b.takeDamange(a.getEnergyPoints());
	b.beRepaired(4);
	b.attack("Goku");
	b.guardGate();

	std::cout << "-----FragTrap-----" << std::endl;
	FragTrap	c("MariaAntonietta");
	c.takeDamange(6);
	c.beRepaired(4);
	c.attack(b.getName());
	c.highFivesGuys();

	return (0);
}

