#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	iter(T *array, int size, void f(T &obj))
{
	for (int i = 0; i < size; i++)
		f(array[i]);
}

template <typename T>
void	display(T obj)
{
	std::cout << "\'" << obj << "\'" << std::endl;
}

template <typename T>
void	increment(T obj)
{
	obj++;
}

#endif