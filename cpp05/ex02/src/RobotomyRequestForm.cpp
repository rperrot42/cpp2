#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>


RobotomyRequestForm::RobotomyRequestForm(const AForm &other): AForm(other.getName(), 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm():AForm("Robotomy form", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name):AForm(name, 72, 45)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (&other != this){
		this->_isSigned = other._isSigned;
	}
	return *this;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
	srand(time(0));
	if (rand() % 2)
		std::cout << executor.getName() << " has been robotomized" << std::endl;
	else
		std::cout << executor.getName() << " robotomized failed" << std::endl;
}