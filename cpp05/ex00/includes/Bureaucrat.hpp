#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
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
private:
    std::string const   name;
    int                 grade;

    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };
};

#endif