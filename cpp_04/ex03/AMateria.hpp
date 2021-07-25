/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:04:28 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/25 20:33:23 by hyunyoo          ###   ########.fr       */
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

	AMateria(const AMateria &character);
	AMateria &operator=(AMateria const &character);
	std::string const & getType() const;
	unsigned int getXP() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif
