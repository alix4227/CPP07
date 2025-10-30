#include "iter.hpp"
void print(const char& str, const int len)
{
	int i =  0;
	while (i < len)
	{
		std::cout << str << std::endl;
		i++;
	}
}

int main(void) 
{
	const char* str = "0123";
	iter<const char, const int>(str, strlen(str), print);
	return (0);
}