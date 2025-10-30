#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>
#include <string.h>

template <typename T, typename U>
void iter(T* str, U len, void (*f)(T&, U))
{
	std::cout << str << std::endl;
	std::cout << len << std::endl;
	(*f)(*str, len);
}
#endif
