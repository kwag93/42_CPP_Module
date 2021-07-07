/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:04:31 by bkwag             #+#    #+#             */
/*   Updated: 2021/07/07 14:19:25 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
#include <stack>

template<typename T>
class   MutantStack : public std::stack<T> {
 public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack() : std::stack<T>() {}
	MutantStack(MutantStack const& src) : std::stack<T>(src) {}
	~MutantStack() {}
	MutantStack&	operator=(MutantStack const& right) {
		std::stack<T>::operator=(right);
	}

	iterator begin() { return (std::stack<T>::c.begin()); }
	iterator end() { return (std::stack<T>::c.end()); }
};

#endif
