#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	if (argc == 1)
	{
		return 0;
	}
	if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);

		return 0;
	}

}