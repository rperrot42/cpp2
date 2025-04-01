//
// Created by rperrot on 3/31/25.
//

#ifndef EX01_AFORM_HPP
#define EX01_AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
protected:
	bool 				_isSigned;
	const std::string	_name;
	const int 			_gradeToSign;
	const int 			_gradeToExecute;

public:
	AForm();
	AForm(const AForm &other);
	AForm(const std::string &name, const int gradeToSign, const int _gradeToExecute);
	AForm &operator=(const AForm &other);
	virtual ~AForm();
	void 				beSigned(Bureaucrat &bureaucrat) ;
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
	virtual void execute(Bureaucrat const & executor) const = 0;
};
std::ostream& operator<<(std::ostream& os, const AForm & form);

#endif //EX01_AFORM_HPP
