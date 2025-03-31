#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat {
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &);
    Bureaucrat &operator=(const Bureaucrat &bureaucrat);
    void  increment(void);
    void  decrement(void);
    const std::string &getName() const;
    int getGrade() const;
	void signForm(Form &form);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

private:
    std::string const   _name;
    int                 _grade;
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat & person);

#endif