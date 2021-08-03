#include <iostream>
#include <string>

struct Data
{
	std::string	_name;
	int			_level;
};

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data		bob;
	uintptr_t	addr;
	bob._name = "Bob";
	bob._level = 10;
	std::cout << bob._name << " lvl " << bob._level << std::endl;
	std::cout << "Serialize" << std::endl;
	addr = serialize(&bob);
	std::cout << addr << std::endl;
	std::cout << "Deserialize" << std::endl;
	Data	*ptr = deserialize(addr);
	std::cout << ptr->_name << " lvl " << ptr->_level << std::endl;
	return (0);
}