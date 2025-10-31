#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template <typename T>
void iter(T* str, const int len, void (*f)(T const&))
{
	int i = 0;
	while (i < len)
	{
		(*f)(str[i]);
		i++;
	}
}

template <typename T>
void print(T const& str)
{
	std::cout << str << std::endl;
}
#endif
