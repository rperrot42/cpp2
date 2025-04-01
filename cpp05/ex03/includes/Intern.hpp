//
// Created by rperrot on 4/1/25.
//

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP


#include <string>
#include "AForm.hpp"

class Intern
{
public:
	 Intern();
	 ~Intern();
	 Intern(Intern const &intern);
	 Intern &operator=(const Intern &bureaucrat);
	 AForm *makeForm(const std::string &form, const  std::string &target);
};


#endif //EX03_INTERN_HPP
