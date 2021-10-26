#include "Array.hpp"

int main()
{
	Array<int> test1(10);

	std::srand(time(NULL));
	std::cout << "заполнение test1";
	for (int i = 0; i < 10; ++i)
	{
		std::cout << '.';
		test1[i] = (rand() % 100) + 1;
	}
	std::cout << std::endl << "вывод элементов test1" << std::endl;;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "test[" << i << "] = " << test1[i] << std::endl;
	}

	Array<int> cpy_test1(test1);

	std::cout << std::endl << "вывод элементов cpy_test1" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "cpy_test[" << i << "] = " << cpy_test1[i] << std::endl;
	}

	Array<std::string> test2(2);

	test2[0] = "Hello";
	test2[1] = "world!";
	std::cout << std::endl << "test2:" << std::endl << test2[0] << ' ' << test2[1] << std::endl;

	Array<std::string> test3;

	test3 = test2;
	std::cout << std::endl << "cpy_test2:" << std::endl << test3[0] << ' ' << test3[1] << std::endl;
	std::cout << "size cpy_test2: " << test3.size() << std::endl;

	std::cout << std::endl << "try to catch segfault:" << std::endl;
	try
	{
		test3[10];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}