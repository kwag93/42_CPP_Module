#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>

class MemoryException : public std::exception
{
public:
	virtual const char* what() const _NOEXCEPT
	{
		return "Array is full";
	}
};

class ArrayLackException : public std::exception
{
public:
	virtual const char* what() const _NOEXCEPT
	{
		return "Array has less than two elements.";
	}
};

class Span
{
private:
	int *arr;
	int arr_len;
	int count;
public:
	Span(unsigned int n);
	~Span();
	void sort();
	void addNumber(int num);
	void addNumber(int start, int end);
	int shortestSpan();
	int longestSpan();
};

#endif
