#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <cstdlib>
#include <string>

template <typename T>
class Array
{
	public:
	Array();
	Array(unsigned int n);
	~Array();
	Array(Array const& src);
	Array& operator=(Array const& src);
	T& operator[](int i);
	int size()const;
	
	private:
	T* _str;


};

template <typename T>
Array<T>::Array()
{
	_str[0] = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	T* _str = new T[n]();
}

template <typename T>
Array<T>::Array(Array const& src)
{
	*this = src;
}

template <typename T>
int Array<T>::size() const
{
	int i = 0;
	// if (T == std::string)
	// 	return (_str.size());
	// else if (T == int)
	while (_str[i])
		i++;
	return (i);
}

template <typename T>
T& Array<T>::operator[](int i)
{
	if ( i < 0 || i >= this->size())
		throw(std::exception());
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

template <typename T>
Array<T>::~Array()
{

}

#endif
