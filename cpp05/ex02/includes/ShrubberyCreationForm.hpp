//
// Created by rperrot on 3/31/25.
//

#ifndef EX01_SHRUBBERYCREATIONFORM_HPP
#define EX01_SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm(const AForm &other);
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &name);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	void execute(Bureaucrat const & executor) const;
	class FileNotAccessException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};


#endif //EX01_SHRUBBERYCREATIONFORM_HPP
