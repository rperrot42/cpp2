#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	if (argc == 1)
	{
		std::cout <<  std::endl << "test j" << std::endl;
		ScalarConverter::convert("j");
		std::cout <<  std::endl << "test nan" << std::endl;
		ScalarConverter::convert("nan");
		std::cout <<  std::endl << "test nanf" << std::endl;
		ScalarConverter::convert("nanf");
		std::cout <<  std::endl << "test inf" << std::endl;
		ScalarConverter::convert("inf");
		std::cout <<  std::endl << "test inff" << std::endl;
		ScalarConverter::convert("inff");
		std::cout <<  std::endl << "test -inf" << std::endl;
		ScalarConverter::convert("-inf");
		std::cout <<  std::endl << "test -inff" << std::endl;
		ScalarConverter::convert("-inff");
		std::cout <<  std::endl << "test 0" << std::endl;
		ScalarConverter::convert("0");
		std::cout <<  std::endl << "test 0.0" << std::endl;
		ScalarConverter::convert("0.0");
		std::cout <<  std::endl << "test 0.0f" << std::endl;
		ScalarConverter::convert("0.0f");
		std::cout <<  std::endl << "test *" << std::endl;
		ScalarConverter::convert("*");
		std::cout <<  std::endl << "test 42" << std::endl;
		ScalarConverter::convert("42");
		std::cout <<  std::endl << "test 42.0" << std::endl;
		ScalarConverter::convert("42.0");
		std::cout <<  std::endl << "test 42.2f" << std::endl;
		ScalarConverter::convert("42.2f");
	}
	if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);

		return 0;
	}

}