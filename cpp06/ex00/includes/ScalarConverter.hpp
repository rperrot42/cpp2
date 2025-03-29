//
// Created by rperrot on 3/28/25.
//

#ifndef EX00_SCALARCONVERTER_HPP
#define EX00_SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter &operator=(const ScalarConverter &other);

	static void convert(const std::string &str);
private:
	double atod(const std::string &literal);
};


#endif //EX00_SCALARCONVERTER_HPP
