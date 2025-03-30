#include <Bureaucrat.hpp>

int main()
{
    Bureaucrat b("Hello World", 2);
    Bureaucrat c;
    c = b;
    std::cout << c.getName() << std::endl;
    return 0;
}