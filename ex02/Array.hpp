#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

template <typename T>
class Array
{
	public:
	Array()
	{
		_str = NULL;
		_size = 0;
	}
	Array(unsigned int n)
	{
		_str = new T[n]();
		_size = n;
	}
	~Array()
	{
		delete [] _str;
	}
	Array(Array const& src)
	{
		*this = src;
	}
	Array& operator=(Array const& src);
	T& operator[](int i);
	unsigned int size() const
	{
		return (_size);
	}
	
	private:
	T* _str;
	unsigned int _size;
};


template <typename T>
T& Array<T>::operator[](int i)
{
	int strlen = static_cast<int>(size());
	if (i < 0)
		throw std::invalid_argument("Index négatif non accepté");
	if (i >= strlen)
		throw std::runtime_error("Index hors limites");
	return (_str[i]);
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> const& src)
{
	int i = 0;

	if (this == &src)
		return (*this);
	delete [] this->_str;
	this->_str = new T[src.size()];
	while (i < this->size())
	{
		this->_str[i] = src._str[i];
		i++;
	}
	return (*this);
}
#endif
