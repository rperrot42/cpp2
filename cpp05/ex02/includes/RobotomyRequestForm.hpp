//
// Created by rperrot on 4/1/25.
//

#ifndef EX01_ROBOTOMYREQUESTFORM_HPP
#define EX01_ROBOTOMYREQUESTFORM_HPP


#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm(const AForm &other);
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &name);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	void execute(Bureaucrat const & executor) const;
};


#endif //EX01_ROBOTOMYREQUESTFORM_HPP
