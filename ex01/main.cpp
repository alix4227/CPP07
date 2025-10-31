#include "iter.hpp"


int main(void) 
{
	char str[] = "0123";
	iter(str, 4, print);
	int string[] = {1, 2, 3};
	iter(string, 3, print);
	std::string s = "Lechat";
	iter(&s, 1, print);
	return (0);
}