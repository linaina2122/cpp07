#include "iter.hpp"

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

int main()
{
	const char *arr[] = {"qqqqqqq", "aaaaaaaaaa", "zzzzzzzzzzzzzz"};
	int len = sizeof(arr) / sizeof(char *);
	iter(arr, len, my_func);
	std::cout << "\n-----------------------------------------\n";
	int array[] = {1111111, 23222222, 444444444, 9999, 000};
	len = sizeof(array) / sizeof(int);
	iter(array, len, my_func);
	std::cout << "\n-----------------------------------------\n";
	double d[] = {2.11, 5.14, 9.01};
	len = sizeof(d) / sizeof(double);
	iter(d, len, my_func);
	return(0);
}
