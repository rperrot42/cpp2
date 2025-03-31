#include <iostream>
#include "whatever.hpp"
#include "../includes/whatever.hpp"

int main() {

	int a = 5;
	int b = 10;
	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	std::string str1 = "Hello";
	std::string str2 = "World";
	std::cout << "str1 = " << str1 << ", str2 = " << str2 << " min is " << ::min(str1, str2) <<  std::endl;
	std::cout << "str1 = " << str1 << ", str2 = " << str2 << " max is " << ::max(str1, str2) <<  std::endl;
//	Test *test1 = new Test();
//	Test *test2 = new Test();
//	std::cout << "test1 = " << test1 << ", test2 = " << test2 << " min is " << ::min(*test1, *test2) <<  std::endl;
	return 0;
}