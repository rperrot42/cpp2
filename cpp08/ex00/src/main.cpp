#include "easyfind.hpp"

int main() {
	std::vector<int> v(5);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	try
	{
		std::cout << *(easyFind(v, 3)).base() << std::endl;
		easyFind(v, 789);
	}
	catch (NotFoundException &e){
		std::cout << e.what() << std::endl;
	}
}