/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:04:31 by hyunyoo           #+#    #+#             */
/*   Updated: 2021/08/01 17:45:03 by hyunyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
 public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack(): std::stack<T>(){}
	MutantStack(MutantStack const& other)
	{
		*this = other;
	}
	~MutantStack(){}
	MutantStack&	operator=(MutantStack const& other)
	{
		std::stack<T>::operator =(other);
		return (*this);
	}

	iterator begin() { return (std::stack<T>::c.begin()); }
	iterator end() { return (std::stack<T>::c.end()); }
};

#endif
