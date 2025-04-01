# include <Bureaucrat.hpp>
# include <ShrubberyCreationForm.hpp>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	ShrubberyCreationForm s1("s1");
	RobotomyRequestForm r1("r1");
	PresidentialPardonForm p1("p1");
	Bureaucrat b1("Emmanuel Macaron", 1);
	try
	{
		s1.execute(b1);
		p1.execute(b1);
		r1.execute(b1);
		b1.executeForm(s1);
		b1.executeForm(p1);
		b1.executeForm(r1);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat b2 ("Raphael Perrot", 150);
	try{
		s1.execute(b2);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try{
		p1.execute(b2);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try{
		r1.execute(b2);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	try{
		b2.executeForm(r1);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	try{
		b2.executeForm(s1);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	try{
		b2.executeForm(p1);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

}
