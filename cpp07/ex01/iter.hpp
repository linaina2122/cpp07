#ifndef ITER_HPP
	#define ITER_HPP

#include <iostream>
template <typename T>

void my_func(T arr)
{
		std::cout << arr << " ";
}
template <typename T>

void iter(T *arr, int len, void(my_func)(T))
{
	int count = 0;
	while(count < len)
	{
		my_func(arr[count]);
		count++;
	}
}

#endif
