/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:33:20 by aparolar          #+#    #+#             */
/*   Updated: 2022/10/10 19:12:44 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(FragTrap const &toCopy);
		FragTrap(std::string name);
		~FragTrap();

		FragTrap& operator = (FragTrap const &toCopy);

		void highFivesGuys(void);
};

#endif

