#ifndef EX02_ARRAY_TPP
#define EX02_ARRAY_TPP

#include <iostream>
template <class T>
class Array
{
private:
	T *_array;
	size_t _size;
	class IndexOutOfRangeException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
public:
	Array();
	Array(size_t n);
	Array(const Array &copy);
	~Array();
	Array &operator=(const Array &copy);
	T &operator[](size_t index) const;
	size_t size() const;
};

template <class T>
const char *Array<T>::IndexOutOfRangeException::what() const throw()
{
	return "Index out of range";
}
template <class T>
size_t Array<T>::size() const
{
	return _size;
}

template <class T>
T &Array<T>::operator[](size_t index) const
{
	if (index >= _size)
		throw IndexOutOfRangeException();
	return _array[index];
}


template <class T>
Array<T>::~Array()
{
	delete[] _array;
}

template <class T>
Array<T> &Array<T>::operator=(const Array &copy)
{
	if (this != &copy)
	{
		delete[] _array;
		_size = copy._size;
		_array = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_array[i] = copy._array[i];
	}
	return *this;
}

template <class T>
Array<T>::Array(const Array &copy) : _size(copy._size)
{
	_array = new T[_size];
	for (size_t i = 0; i < _size; i++)
		_array[i] = copy._array[i];
}

template <class T>
Array<T>::Array() : _array(new T[0]), _size(0)
{

}

template <class T>
Array<T>::Array(size_t n) : _size(n)
{
	if (n > 0)
	{
		_array = new T[n];
		for (size_t i = 0; i < n; i++)
			_array[i] = T();
	}
	else
	{
		_array = new T[0];
	}
}

#endif //EX02_ARRAY_TPP
