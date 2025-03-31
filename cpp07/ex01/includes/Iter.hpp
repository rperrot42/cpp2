#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP
#include <iostream>
template <typename T>

void iter(T *array, size_t length, void (*func)(T &))
{
	for (size_t i = 0; i < length; i++)
	{
		func(array[i]);
	}
}
#endif //EX01_ITER_HPP
