/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:08:32 by aparolar          #+#    #+#             */
/*   Updated: 2022/11/04 09:10:43 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamange;

	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const &toCopy);
		ClapTrap(std::string name);
		~ClapTrap(void);

		ClapTrap& operator = (ClapTrap const &toCopy);

		std::string	getName(void) const;
		int		getHitPoints(void) const;
		int		getAttackDamange(void) const;
		int		getEnergyPoints(void) const;
		void	attack(std::string const & target);
		void	takeDamange(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
