/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:18:44 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/16 14:51:10 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("Clap");

	clap.attack("Enemy");
	clap.beRepaired(10);
	clap.takeDamage(10);
	return 0;
}
