#include "Form.hpp"

Form::Form():_isSigned(false), _name("Form"), _gradeToSign(1), _gradeToExecute(1)
{

}

Form::Form(const Form &other):_isSigned(other._isSigned), _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{

}

Form::~Form()
{

}

Form::Form(const std::string &name, const int gradeToSign, const int gradeToExecute):_isSigned(false), _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
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

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_isSigned = true;
}

Form &Form::operator=(const Form &other)
{
	if (&other != this){
		this->_isSigned = other._isSigned;
	}
	return *this;
}

const char  *Form::GradeTooLowException::what() const throw()
{
	return "grade is too low";
}

const char  *Form::GradeTooHighException::what() const throw()
{
	return "grade is too high";
}

std::ostream& operator<<(std::ostream& os, const Form & form)
{
	std::string notSigned = (form.isIsSigned() ? "" : " not");
	os << form.getName() << ", form signed grade : " << form.getGradeToSign() << ", execute grade : " << form.getGradeToExecute()
	<< ", is" + notSigned + " signed.";
	return os;
}

bool Form::isIsSigned() const
{
	return _isSigned;
}

void Form::setIsSigned(bool isSigned)
{
	_isSigned = isSigned;
}

const std::string &Form::getName() const
{
	return _name;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}
