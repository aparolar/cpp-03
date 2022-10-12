/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:07:29 by aparolar          #+#    #+#             */
/*   Updated: 2022/10/11 13:57:29 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	x("Chuck Norris");
	x.takeDamange(6);
	x.beRepaired(4);
	x.attack("Bob esponja");
	x.highFivesGuys();

	ScavTrap	a("Maria Antonietta");
	a.takeDamange(6);
	a.beRepaired(4);
	a.attack("Bruce Willis");
	a.guardGate();


	ScavTrap c = a;
	return (0);
}

