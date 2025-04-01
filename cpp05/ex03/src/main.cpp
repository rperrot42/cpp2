# include <Bureaucrat.hpp>
# include <ShrubberyCreationForm.hpp>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern intern;
	AForm *aform = intern.makeForm("fjri", "frfr");
	if (aform)
		std::cout << aform << std::endl;
	AForm *presidentForm1 = intern.makeForm("Presidential   PARDOn", "president 1");
	AForm *presidentForm2 = intern.makeForm("PRESIDENTIALPARDON", "president 2");
	AForm *presidentForm3 = intern.makeForm("presidentialpardon", "president 3");
	AForm *presidentForm4 = intern.makeForm("PresidentialPARDOn", "president 4");
	if (presidentForm1)
		std::cout << *presidentForm1 << std::endl;
	if (presidentForm2)
		std::cout << *presidentForm2 << std::endl;
	if (presidentForm3)
		std::cout << *presidentForm3 << std::endl;
	if (presidentForm4)
		std::cout << *presidentForm4 << std::endl;
	AForm *robotomyRequest = intern.makeForm("robotomy request", "robotomy");
	if (robotomyRequest)
		std::cout<< *robotomyRequest << std::endl;
	AForm *shrubberyCreation = intern.makeForm("shrubberyCreation", "shrubbery creation");
	if (shrubberyCreation)
		std::cout << *shrubberyCreation <<std::endl;
	Bureaucrat president("Emmanuel Macron", 1);
	robotomyRequest->execute(president);
	presidentForm1->execute(president);
	shrubberyCreation->execute(president);
	delete presidentForm1;
	delete presidentForm2;
	delete presidentForm3;
	delete presidentForm4;
	delete robotomyRequest;
	delete shrubberyCreation;

}

