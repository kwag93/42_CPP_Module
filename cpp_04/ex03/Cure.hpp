/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:04:39 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/30 16:09:31 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>

class Cure: public AMateria
{
public:
	Cure();
	~Cure();
	Cure(Cure const &cure);
	Cure &operator=(Cure const &cure);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
