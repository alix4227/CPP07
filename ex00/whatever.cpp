#include "whatever.hpp"

Whatever::Whatever()
{

}

Whatever::~Whatever()
{

}

Whatever::Whatever(Whatever const& src)
{
	*this = src;
}

Whatever& Whatever::operator=(Whatever const& src)
{
	(void)src;
	return (*this);
}