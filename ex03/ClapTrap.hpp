/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:08:32 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/25 14:32:56 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamange;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);

		std::string	getName(void) const;
		int		getHitPoints(void) const;
		int		getAttactDamange(void) const;
		int		getEnergyPoints(void) const;
		void	attack(std::string const & target);
		void	takeDamange(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
