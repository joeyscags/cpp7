#include <stdexcept>

template <typename T>
Array<T>::Array( void ) : _arr(nullptr), _size(0) {}

template <typename T>
Array<T>::Array( unsigned int n ) : _arr(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array( const Array &other ) : _arr(nullptr), _size(0)
{
	*this = other;
}

template <typename T>
Array<T> &Array<T>::operator=( const Array &other )
{
	if (this == &other)
		return *this;
	delete[] _arr;
	_size = other._size;
	_arr = new T[_size]();
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = other._arr[i];
	return *this;
}

template <typename T>
Array<T>::~Array( void )
{
	delete[] _arr;
}

template <typename T>
T &Array<T>::operator[]( unsigned int index )
{
	if (index >= _size)
		throw std::out_of_range("index out of bounds");
	return _arr[index];
}

template <typename T>
const T &Array<T>::operator[]( unsigned int index ) const
{
	if (index >= _size)
		throw std::out_of_range("index out of bounds");
	return _arr[index];
}

template <typename T>
unsigned int Array<T>::size( void ) const
{
	return _size;
}
