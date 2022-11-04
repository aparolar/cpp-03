/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:07:29 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/04 09:53:14 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	return (0);
}

