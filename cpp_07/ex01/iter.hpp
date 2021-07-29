#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *ptr, unsigned int len, void (*f)(T const &arr))
{
	for(unsigned int i=0; i<len; i++)
	{
		(*f)(ptr[i]);
	}
}
#endif
