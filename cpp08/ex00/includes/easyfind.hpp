//
// Created by rperrot on 4/3/25.
//

#ifndef EX00_ESAYFIND_HPP
#define EX00_ESAYFIND_HPP
#include <vector>
#include <iostream>
#include <algorithm>
template <typename T>
typename T::iterator	easyFind(T templateInt, const int value);

class NotFoundException : std::exception
{
public:
	virtual const char * what() const throw(){
		return "occurence not found";
	}
};
#include "easyfind.tpp"
#endif //EX00_ESAYFIND_HPP
