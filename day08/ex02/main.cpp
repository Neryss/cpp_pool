#include "mutantstack.hpp"
#include <iostream>

int main(void)
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top stack is : " << mstack.top() << std::endl;
	std::cout << "mstack size : " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "mstack size after pop : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator end = mstack.end();

	++it;
	--it;
	while (it != end)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return (0);
}