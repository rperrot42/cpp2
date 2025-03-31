#include <Bureaucrat.hpp>


int	main(void)
{
	try
	{
		Bureaucrat errorGradeToHigh("grade to high", 0);
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat errorGradeToLow("grade to low", 151);
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	Bureaucrat *astro = new Bureaucrat("Astro Bot", 3);
	Bureaucrat *asimov = new Bureaucrat();
	Bureaucrat *copyAstro = new Bureaucrat(*astro);
	std::cout << std::endl;
	try
	{
		astro->increment();
		astro->increment();
		astro->increment();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		asimov->decrement();
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << *astro << std::endl;
	std::cout << *asimov << std::endl;
	std::cout << *copyAstro;

	std::cout << std::endl << std::endl;

	delete astro;
	delete copyAstro;
	delete asimov;

	return 0;
}