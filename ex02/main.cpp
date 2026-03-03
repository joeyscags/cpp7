#include <iostream>
#include <string>
#include "Array.hpp"

int main( void )
{
	Array<int>		empty;
	Array<int>		ints(5);
	Array<std::string>	strs(3);

	std::cout << "--- empty array ---" << std::endl;
	std::cout << "size = " << empty.size() << std::endl;

	std::cout << "\n--- int array ---" << std::endl;
	for (unsigned int i = 0; i < ints.size(); i++)
	{
		ints[i] = i * 10;
		std::cout << "ints[" << i << "] = " << ints[i] << std::endl;
	}

	std::cout << "\n--- copy constructor ---" << std::endl;
	Array<int>	copy(ints);
	copy[4] = 999;
	std::cout << "ints[0] = " << ints[4] << std::endl;
	std::cout << "copy[0] = " << copy[4] << std::endl;

	std::cout << "\n--- assignment operator ---" << std::endl;
	Array<int>	assigned;
	assigned = ints;
	assigned[1] = 888;
	std::cout << "ints[1]     = " << ints[1] << std::endl;
	std::cout << "assigned[1] = " << assigned[1] << std::endl;

	std::cout << "\n--- string array ---" << std::endl;
	strs[0] = "hello";
	strs[1] = "world";
	strs[2] = "42";
	for (unsigned int i = 0; i < strs.size(); i++)
		std::cout << "strs[" << i << "] = " << strs[i] << std::endl;

	std::cout << "\n--- out of bounds ---" << std::endl;
	try { std::cout << ints[100] << std::endl; }
	catch (const std::exception &e) { std::cout << "caught: " << e.what() << std::endl; }

	try { std::cout << empty[0] << std::endl; }
	catch (const std::exception &e) { std::cout << "caught: " << e.what() << std::endl; }

	return 0;
}
