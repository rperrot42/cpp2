//
// Created by rperrot on 4/3/25.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
public:
	Span();
	Span(unsigned int size);
	Span(const Span &span);
	Span &operator=(const Span &span);
	~Span();
	unsigned int getSize() const;
	void setSize(unsigned int size);
	const std::vector<int> &getArray() const;
	void setArray(const std::vector<int> &array);
	void addNumber(const int number);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	class MaxSizeArrayException : std::exception{
	public:
		virtual const char * what() const throw();
	};

private:
	unsigned int		_size;
	std::vector<int>	_array;


};


#endif //EX01_SPAN_HPP
