/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:30:18 by aparolar          #+#    #+#             */
/*   Updated: 2022/10/11 10:45:08 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap const &toCopy);
		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap& operator = (DiamondTrap const &toCopy);

		std::string	getName();
		void	attack(std::string const &target);
		void	whoAmI();
};

#endif
