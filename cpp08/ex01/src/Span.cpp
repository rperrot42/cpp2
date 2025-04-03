#include <limits>
#include "Span.hpp"

unsigned int Span::getSize() const
{
	return _size;
}

void Span::setSize(unsigned int size)
{
	_size = size;
}

const std::vector<int> &Span::getArray() const
{
	return _array;
}

void Span::setArray(const std::vector<int> &array)
{
	_array = array;
}

Span::Span(unsigned int size) : _size(size)
{
	this->_array = std::vector<int>();
}

Span::Span():_size(0)
{
	this->_array = std::vector<int>(0);
}

Span::~Span()
{}

Span::Span(const Span &span):_size(span._size), _array(span._array){}

Span &Span::operator=(const Span &span){
	if (this != &span){
		this->_size = span._size;
		this->_array = span._array;
	}
	return *this;
}

void Span::addNumber(const int number)
{
	if (this->_array.size() == this->_size)
		throw MaxSizeArrayException();
	this->_array.push_back(number);
}

unsigned int Span::shortestSpan()
{
	std::sort(this->_array.begin(), this->_array.end());
	unsigned int shortest = 0;
	bool first = true;
	for (std::vector<int>::iterator it = this->_array.begin(); it < this->_array.end() - 1; ++it) {
		long diff = *(it) - *(it +1);
		if (diff < 0)
			diff *= -1;
		if (first || diff < shortest)
			shortest = diff;
		first = false;
	}
	return shortest;
}

unsigned int Span::longestSpan(){
	if (this->_array.size() < 2)
		return 0;
	int min = *std::min_element(this->_array.begin(), this->_array.end());
	int max = *std::max_element(this->_array.begin(), this->_array.end());
	return (max - min);
}

const char *Span::MaxSizeArrayException::what() const throw()
{
	return "exceed the limit of size";
}