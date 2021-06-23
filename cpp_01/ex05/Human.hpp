/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:54:04 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/23 11:16:45 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human{
public:
	const Brain brain;
	std::string identify() const;
	const Brain &getBrain() const; //ref로 반환해야 주소가 동일하게 나온다.
};

#endif
