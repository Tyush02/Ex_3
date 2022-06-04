#include <iostream>
#include <string>
#include <vector>
#include "file1.h"
#include "file2.h"

int main()
{	
	int number;
	std::cout << "The Cloud is empty, do you want to fill it?\n Yes - 1\n No - 2\n";
	std::cin >> number;
	if (number == 1)
	{
		Func_C();
	}
	else
	{
		std::cout << "...";
	}
	
	return 0;
}

