/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 22:13:46 by aparolar          #+#    #+#             */
/*   Updated: 2022/10/10 20:06:41 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(ScavTrap const &toCopy);
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap& operator = (ScavTrap const &toCopy);

		void	guardGate();
		void	attack(std::string const & target);
};

#endif
