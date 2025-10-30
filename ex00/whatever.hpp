#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>
#include <string>

class Whatever
{
	public:
	Whatever();
	~Whatever();
	Whatever(Whatever const& src);
	Whatever& operator=(Whatever const& src);
};

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

template <typename T>
T min(T a, T b)
{
	if (a > b)
		return (b);
	return (a);
}

template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
#endif
