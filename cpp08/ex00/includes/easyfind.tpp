#include "easyfind.hpp"


template <typename T>
typename T::iterator	easyFind(T templateInt, const int value){
	 std::vector<int>::iterator iter = std::find(templateInt.begin(), templateInt.end(), value);
	if (iter == templateInt.end())
		throw NotFoundException();
	return iter;
}