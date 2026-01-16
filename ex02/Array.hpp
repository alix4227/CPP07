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
	Array& operator=(Array const& src);
	Array(Array const& src)
	{
		this->_str = NULL;
		this->_size = 0;
		*this = src;
	}
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
	int len = static_cast<int>(size());
	if (i < 0 || i >= len)
		throw std::exception();
	return (_str[i]);
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> const& src)
{
	unsigned int i = 0;

	if (this == &src)
		return (*this);
	delete [] this->_str;
	this->_str = new T[src.size()];
	while (i < src.size())
	{
		this->_str[i] = src._str[i];
		i++;
	}
	this->_size = src._size;
	return (*this);
}
#endif
