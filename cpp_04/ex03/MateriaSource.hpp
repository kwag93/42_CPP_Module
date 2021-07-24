/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:05:02 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/30 15:31:5 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *sources[4];
	int count;
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource &materia);
	MateriaSource &operator=(MateriaSource const &materia);
	virtual void learnMateria(AMateria* materia);
	virtual AMateria* createMateria(std::string const & type);;
};

#endif
