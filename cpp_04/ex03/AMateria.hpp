/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:04:28 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/19 15:57:12 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string _type;
	unsigned int _xp;
public:
	AMateria();
	AMateria(std::string const & type);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif
