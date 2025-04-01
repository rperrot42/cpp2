#include <map>
#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(){

}

Intern::Intern(const Intern &intern)
{
	(void)intern;
}

Intern::~Intern()
{}

Intern &Intern::operator=(const Intern &bureaucrat)
{
	(void)bureaucrat;
	return *this;
}

AForm *Intern::makeForm(const std::string &form, const  std::string &target)
{
	bool 					find = false;
	std::string modifForm = form;
	for (size_t i = 0; i < form.size(); i++){
		modifForm[i] = std::tolower(form[i]);
	}
	for (size_t i = 0; i < modifForm.size(); ) {
		if (modifForm[i] == ' ') {
			modifForm.erase(i, 1);
		} else {
			i++;
		}
	}
	const std::string messages[3] = {"presidentialpardon", "robotomyrequest", "shrubberycreation"};
	int i = -1;
	while (!find && ++i < 3){
		if (messages[i] == modifForm)
		{
			switch (i){
				case 0:
					return new PresidentialPardonForm(target);
				case 1:
					return new RobotomyRequestForm (target);
				case 2:
					return new ShrubberyCreationForm(target);
			}
		}
	}
	std::cerr << "This name of form does not exist" << std::endl;
	return 0;
}