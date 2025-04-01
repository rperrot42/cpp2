//
// Created by rperrot on 4/1/25.
//

#ifndef EX01_PRESIDENTIALPARDONFORM_HPP
#define EX01_PRESIDENTIALPARDONFORM_HPP


#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm(const AForm &other);
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &name);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
	void execute(Bureaucrat const & executor) const;
};




#endif //EX01_PRESIDENTIALPARDONFORM_HPP
