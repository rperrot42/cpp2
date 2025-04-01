#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const AForm &other): AForm(other.getName(), 72, 45)
{
}

PresidentialPardonForm::PresidentialPardonForm():AForm("Presidential form", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &name):AForm(name, 25, 5)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (&other != this){
		this->_isSigned = other._isSigned;
	}
	return *this;
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
	std::cout << executor.getName() << " has been pardonned by Zaphod Beeblebrox." << std::endl;
}
