#include <Iter.hpp>

void doubleInt(int &n) {
	n *= 2;
}

void toUpperCase(char &c) {
	if (c >= 'a' && c <= 'z') {
		c -= 32;
	}
	else if (c >= 'A' && c <= 'Z') {
		c += 32;
	}
}

void printChar(char &c) {
	std::cout << c << std::endl;
}

void printInt(int &n) {
	std::cout << n << std::endl;
}

int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	char charArray[] = {'a', 'b', 'C', 'd', 'e'};
	::iter(intArray, 5, doubleInt);
	::iter(charArray, 5, toUpperCase);
	::iter(charArray, 5, printChar);
	::iter(intArray, 5, printInt);
	return 0;
}

