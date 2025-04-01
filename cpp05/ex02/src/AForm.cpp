#include "AForm.hpp"

AForm::AForm(): _isSigned(false), _name("AForm"), _gradeToSign(1), _gradeToExecute(1)
{

}

AForm::AForm(const AForm &other): _isSigned(other._isSigned), _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{

}

AForm::~AForm()
{

}

AForm::AForm(const std::string &name, const int gradeToSign, const int gradeToExecute): _isSigned(false), _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1)
		throw GradeTooHighException();
	if (gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150)
		throw GradeTooLowException();
	if (gradeToExecute > 150)
		throw GradeTooLowException();
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_isSigned = true;
}

AForm &AForm::operator=(const AForm &other)
{
	if (&other != this){
		this->_isSigned = other._isSigned;
	}
	return *this;
}

const char  *AForm::GradeTooLowException::what() const throw()
{
	return "grade is too low";
}

const char  *AForm::GradeTooHighException::what() const throw()
{
	return "grade is too high";
}

std::ostream& operator<<(std::ostream& os, const AForm & form)
{
	std::string notSigned = (form.isIsSigned() ? "" : " not");
	os << form.getName() << ", form signed grade : " << form.getGradeToSign() << ", execute grade : " << form.getGradeToExecute()
	<< ", is" + notSigned + " signed.";
	return os;
}

bool AForm::isIsSigned() const
{
	return _isSigned;
}

void AForm::setIsSigned(bool isSigned)
{
	_isSigned = isSigned;
}

const std::string &AForm::getName() const
{
	return _name;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}
