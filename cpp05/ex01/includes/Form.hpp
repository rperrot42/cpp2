//
// Created by rperrot on 3/31/25.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
	bool 				_isSigned;
	const std::string	_name;
	const int 			_gradeToSign;
	const int 			_gradeToExecute;

public:
	Form();
	Form(const Form &other);
	Form(const std::string &name, const int gradeToSign, const int _gradeToExecute);
	Form &operator=(const Form &other);
	~Form();
	void 				beSigned(Bureaucrat &bureaucrat);
	bool				isIsSigned() const;
	void 				setIsSigned(bool isSigned);
	const std::string 	&getName() const;
	int 				getGradeToSign() const;
	int 				getGradeToExecute() const;
	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};
std::ostream& operator<<(std::ostream& os, const Form & form);

#endif //EX01_FORM_HPP
