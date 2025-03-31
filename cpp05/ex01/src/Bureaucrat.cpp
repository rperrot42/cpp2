# include <Bureaucrat.hpp>
Bureaucrat::Bureaucrat(): _name("Bureaucrat"), _grade(150){

}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade){
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat): _name(bureaucrat.getName()), _grade(bureaucrat.getGrade()){
    this->_grade = bureaucrat._grade;
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat){
    this->_grade = bureaucrat.getGrade();
    return *this;
}
const std::string &Bureaucrat ::getName() const {
    return this->_name;
}

int Bureaucrat ::getGrade() const {
    return this->_grade;
}

void  Bureaucrat::increment(void) {
    if (this->_grade <= 1)
        throw GradeTooHighException();
    this->_grade -= 1;
}

void  Bureaucrat::decrement(void) {
    if (this->_grade >= 150)
        throw GradeTooLowException();
    this->_grade += 1;

}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat & person){
	os << person.getName() << ", bureaucrat grade " << person.getName() << ".";
	return os;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this -> getName() << " signed " << form.getName() << "." << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this -> getName() << " couldn’t sign " << form.getName() << " because " << e.what() << "." << std::endl;
	}
}
