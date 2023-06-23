#ifndef ITER_HPP
	#define ITER_HPP

#include <iostream>
template <typename T>
void iter(T *arr, int len, void(my_func)(T, int));
template <typename T>
void my_func(T arr);

#endif
