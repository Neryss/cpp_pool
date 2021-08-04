#include "Array.hpp"

int main(void)
{
	Array<int> i1(5);

	for (int i = 0; i < 5; i++)
		i1[i] = i;
	for (int i = 0; i < 5; i++)
		std::cout << i1[i] << std::endl;
	try
	{
		std::cout << i1[10] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
