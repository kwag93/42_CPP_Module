/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:04:43 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/30 16:45:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
public:
		Ice();
		virtual ~Ice();
		Ice(Ice const &ice);
		Ice &operator=(Ice const &ice);
		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);
};

#endif
