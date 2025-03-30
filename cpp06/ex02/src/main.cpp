#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <typeinfo>
#include <cstdlib>
#include <ctime>

static void	identify(Base* p);
static void	identify(Base& p);
static 		Base *generate();

int main() {
	std::srand(std::time(0));
	for (int i = 0; i < 1000; ++i)
	{
		Base *a = generate();
		Base &a2 = *a;
		identify(a);
		identify(a2);
		delete a;
	}
	return 0;
}

static Base *generate()
{
	int i = rand() % 3;
	if (i == 0)
		return new A();
	else if (i == 1)
		return new B();
	else
		return new C();
}
static void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

static void identify(Base& p)
{
	try{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch (std::bad_cast &e) {

	}
	try{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch (std::bad_cast &e) {

	}
	try{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch (std::bad_cast &e) {

	}
}