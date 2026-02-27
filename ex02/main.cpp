#include <iostream>
#include <string>
#include "Array.hpp"

int main( void )
{
	std::cout << "--- empty array ---" << std::endl;
	Array<int>	empty;
	std::cout << "size: " << empty.size() << std::endl;

	std::cout << "\n--- int array of 5 ---" << std::endl;
	Array<int>	ints(5);
	for (unsigned int i = 0; i < ints.size(); i++)
		ints[i] = (int)i * 10;
	for (unsigned int i = 0; i < ints.size(); i++)
		std::cout << "ints[" << i << "] = " << ints[i] << std::endl;

	std::cout << "\n--- copy constructor independence ---" << std::endl;
	Array<int>	copy(ints);
	copy[0] = 999;
	std::cout << "original ints[0] = " << ints[0] << " (should be 0)" << std::endl;
	std::cout << "copy[0] = " << copy[0] << " (should be 999)" << std::endl;

	std::cout << "\n--- assignment operator independence ---" << std::endl;
	Array<int>	assigned;
	assigned = ints;
	assigned[1] = 888;
	std::cout << "original ints[1] = " << ints[1] << " (should be 10)" << std::endl;
	std::cout << "assigned[1] = " << assigned[1] << " (should be 888)" << std::endl;

	std::cout << "\n--- string array ---" << std::endl;
	Array<std::string>	strs(3);
	strs[0] = "hello";
	strs[1] = "world";
	strs[2] = "42";
	for (unsigned int i = 0; i < strs.size(); i++)
		std::cout << "strs[" << i << "] = " << strs[i] << std::endl;

	std::cout << "\n--- out of bounds exception ---" << std::endl;
	try
	{
		std::cout << ints[100] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "caught: " << e.what() << std::endl;
	}

	std::cout << "\n--- empty array out of bounds ---" << std::endl;
	try
	{
		std::cout << empty[0] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "caught: " << e.what() << std::endl;
	}

	return 0;
}
