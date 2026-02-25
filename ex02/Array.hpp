#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	public:
		Array( void );
		Array( unsigned int n );
		Array( const Array &other );
		Array &operator=( const Array &other );
		~Array( void );

		T			&operator[]( unsigned int index );
		const T		&operator[]( unsigned int index ) const;
		unsigned int	size( void ) const;

	private:
		T				*_arr;
		unsigned int	_size;
};

# include "Array.tpp"

#endif
