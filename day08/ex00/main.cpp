#include "easyfind.hpp"
#include <iostream>

int main(void)
{
	std::vector<int> vi;

	vi.push_back(1);
	vi.push_back(2);
	vi.push_back(3);
	vi.push_back(4);
	vi.push_back(5);

	try
	{
		std::cout << easyfind(vi, 1) << std::endl;
		std::cout << easyfind(vi, 5) << std::endl;
		std::cout << easyfind(vi, 10) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}