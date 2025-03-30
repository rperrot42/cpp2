# include <Bureaucrat.hpp>
Bureaucrat::Bureaucrat():name("Bureaucrat"), grade(150){
    std::cout << "Bureaucrat constructor default called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade){
    std::cout << "Bureaucrat constructor  called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat):name(bureaucrat.getName()), grade(bureaucrat.getGrade()){
    this->grade = bureaucrat.grade;
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat){
    std::cout << "operator affectation of cat called" << std::endl;
    this->grade = bureaucrat.getGrade();
    return *this;
}
const std::string &Bureaucrat ::getName() const {
    return this->name;
}

int Bureaucrat ::getGrade() const {
    return this->grade;
}

void  Bureaucrat::increment(void) {
    if (this->grade <= 1)
        throw GradeTooHighException();
    this->grade -= 1;
}

void  Bureaucrat::decrement(void) {
    if (this->grade >= 150)
        throw GradeTooLowException();
    this->grade += 1;

}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}
const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}