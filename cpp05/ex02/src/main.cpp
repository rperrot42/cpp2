#include <Bureaucrat.hpp>

int main()
{
	std::cout << "test sign Grade to low" << std ::endl << std::endl;
	try {
		Form a("a", 151, 150);
	}
	catch (std::exception &e)
 	{
		std ::cerr << e.what() << std::endl;
	}

	std::cout << "test sign Grade to high" << std ::endl << std::endl;
	try {
		Form a("a", 0, 150);
	}
	catch (std::exception &e)
 	{
		std ::cerr << e.what() << std::endl;
	}

	std::cout << "test execute Grade to low" << std ::endl << std::endl;
	try {
		Form a("a", 139, 151);
	}
	catch (std::exception &e)
 	{
		std ::cerr << e.what() << std::endl;
	}

	std::cout << "test execute Grade to high" << std ::endl << std::endl;
	try {
		Form a("a", 0, 0);
	}
	catch (std::exception &e)
 	{
		std ::cerr << e.what() << std::endl;
	}
	std::cout << "ẗest operator copy et affectation" << std::endl << std::endl;
	Form f1("f1", 32, 32);
	Form f2(f1);
	Form f3 = f1;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << f3 << std::endl;

	Bureaucrat b1("b1", 32);
	b1.signForm(f1);
	std::cout << f1 << std::endl;

	Form fNotSigned("notSigned", 31,32);
	b1.signForm(fNotSigned);
	std::cout << fNotSigned << std::endl;
}