#include "Array.tpp"

int main() {
	const Array<size_t> arr(5);
	for (size_t i = 0; i < (arr.size() + 1); i++) {
		try
		{
			arr[i] = i * i * i;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	for (size_t i = 0; i < arr.size(); i++) {
		try
		{
			std::cout << arr[i] << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	Array<char> arrayChar = Array<char>();
	for (size_t i = 0; i < 10; i++) {
		try
		{
			arrayChar[i] = 'a' + i;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	Array<size_t> arrayInt2 = arr;
	for (size_t i = 0; i < arrayInt2.size(); i++) {
		try
		{
			std::cout << arrayInt2[i] << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	Array<size_t> arrayInt3 = Array<size_t>(arrayInt2);
	for (size_t i = 0; i < arrayInt3.size(); i++) {
		try
		{
			std::cout << arrayInt3[i] << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}+
	}
}