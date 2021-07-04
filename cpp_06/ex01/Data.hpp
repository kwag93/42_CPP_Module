/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:24:59 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/04 10:40:40 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
public:
	std::string	str1;
	std::string	str2;
	int			num;
	void *serialize(void);
	Data *deserialize(void * raw);
};

#endif
