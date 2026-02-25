#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void	print( T const &x )
{
	std::cout << x << std::endl;
}

template <typename T>
void	increment( T &x )
{
	x++;
}

int main( void )
{
	int			intArr[] = {1, 2, 3, 4, 5};
	std::string	strArr[] = {"hello", "world", "42"};
	const int	constArr[] = {10, 20, 30};

	std::cout << "--- int array ---" << std::endl;
	::iter(intArr, 5, print<int>);

	std::cout << "--- increment int array ---" << std::endl;
	::iter(intArr, 5, increment<int>);
	::iter(intArr, 5, print<int>);

	std::cout << "--- string array ---" << std::endl;
	::iter(strArr, 3, print<std::string>);

	std::cout << "--- const int array ---" << std::endl;
	::iter(constArr, 3, print<int>);

	return 0;
}
