#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const AForm &other): AForm(other.getName(), 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Shrubbery form", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name):AForm(name, 145, 137)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (&other != this){
		this->_isSigned = other._isSigned;
	}
	return *this;
}

const char * ShrubberyCreationForm::FileNotAccessException:: what() const throw()
{
	return  "You are not access to write in this file";
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
	std::string fileName = executor.getName() + "_shrubbery";
	std::ofstream file(fileName.c_str());
	if (!file.is_open()){
		throw FileNotAccessException();
	}

	file <<   "          &&& &&  & &&                      &&& &&  & &&\n"
			  "      && &\\/&\\|& ()|/ @, &&            && &\\/&\\|& ()|/ @, &&\n"
			  "      &\\/(/&/&||/& /_/)_&/_&            &\\/(/&/&||/& /_/)_&/_&\n"
			  "  &() &\\/&|()|/&\\/ '%\" & ()        &() &\\/&|()|/&\\/ '%\" & ()\n"
			  "  &_\\_&&_\\ |& |&&/&__%_/_& &&      &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
			  "&&   && & &| &| /& & % ()& /&&  &&   && & &| &| /& & % ()& /&&\n"
			  " ()&_---()&\\&\\|&&-&&--%---()~    ()&_---()&\\&\\|&&-&&--%---()~\n"
			  "      &&     \\|||                        &&     \\|||\n"
			  "             |||                               |||\n"
			  "             |||                               |||\n"
			  "             |||                               |||\n"
			  "             |||                               |||\n"
			  "   , -=-~  .-^- _                      , -=-~  .-^- _\n";
	file.close();

}