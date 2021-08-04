#include "Array.hpp"

int main(void)
{
	Array<int> i1(5);
	Array<int> iclone(i1);
	Array<std::string>	s_array(3);
	Array<std::string>	s_clone;

	for (int i = 0; i < 5; i++)
		i1[i] = i;
	for (int i = 0; i < 5; i++)
		iclone[i] = i + i;
	for (int i = 0; i < 5; i++)
		std::cout << i1[i] << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << iclone[i] << std::endl;

	std::cout << "------ STRINGS ------" << std::endl;
	s_array[0] = "yo";
	s_array[1] = "les";
	s_array[2] = "potes";

	s_clone = s_array;
	for (int i = 0; i < 3; i++)
		std::cout << s_clone[i] << std::endl;
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
