//
// Created by rperrot on 3/28/25.
//

#include <cstdlib>
#include <cerrno>
#include <cmath>
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter const &scalarConverter) {
	(void)scalarConverter;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &scalarConverter) {
	(void)scalarConverter;
	return *this;
}

void ScalarConverter::convert(const std::string &str) {
	char	*endptr;
	double	resultDouble;
//	int		resultInt;
	char	resultChar = 0;
	float	resultFloat;

	if (str.size() == 1 && std::isprint(str.at(0)) && str.at(0) < '0' && str.at(0) > '9'){
		resultChar = static_cast<char>(str.at(0));
		resultDouble = static_cast<double>(resultChar);
		std::cout << "char: '" << resultChar << "'" << std::endl;
	}
	else
	{
		resultDouble = std::strtod(str.c_str(), &endptr);
		resultChar = static_cast<char>(resultDouble);
		if (resultDouble > 128 || resultDouble < -127 || std::isnan(resultDouble))
			std::cout << "char: impossible" << std::endl;
		else if (std::isprint(resultChar))
			std::cout << "char: '" << resultChar << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	resultFloat = static_cast<float>(resultDouble);
	if (std::isnan(resultDouble)){
		std::cout << "int: impossible" << std::endl;
	}
	else
		std::cout << "int: " << static_cast<int>(resultDouble) << std::endl;
	std::cout << "float: " << resultFloat << "f" << std::endl;
	std::cout << "double: " << resultDouble << std::endl;
}