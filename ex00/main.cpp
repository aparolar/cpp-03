/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:07:29 by aparolar          #+#    #+#             */
/*   Updated: 2022/10/10 16:02:58 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Chuck Norris");
	a.takeDamange(4);
	a.takeDamange(3);
	a.beRepaired(4);
	a.attack("Bob esponja");

	ClapTrap b = a;
	b.takeDamange(2);
	b.beRepaired(10);
	b.attack("Loli");

	std::cout << "a = " << &a << " b = " << &b << std::endl;

	return (0);
}
