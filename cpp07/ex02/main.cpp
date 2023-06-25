#include "Array.hpp"

int main()
{
	std::cout << "------------int type------------\n";
	try{
		
		array<int>arr1(5);
		std::cout <<" size of array : " << arr1.size() << std::endl;
		arr1[0] = 5;
		std::cout <<"arr1[0] = " << arr1[0]<< std::endl;
		arr1[4] = 44;
	}
	catch(std::exception &e)
	{
		std::cout << "exception : " <<e.what() << std::endl; 
	}
	std::cout << "--------------string type----------\n";
	try{
		array<std::string>arr2(2);
		std::cout << "size of array: " << arr2.size() << std::endl;
		arr2[0] = "helllo";
		arr2[1] = "hii";
		std::cout << "arr2[0] = " << arr2[0] << std::endl;
		std::cout << "arr2[1] = " << arr2[1] << std::endl;
		arr2[2] = "exception";
		std::cout << "arr2[2] = " << arr2[2] << std::endl;
		
	}
	catch(const std::exception &e)
	{
		std::cout << "exception : " <<e.what() << std::endl; 
	}
	std::cout << "--------------char type----------\n";
	try{
		array<char>arr2(10);
		std::cout << "size of array: " << arr2.size() << std::endl;
		arr2[0] = 65;
		arr2[1] = 'a';
		std::cout << "arr2[0] = " << arr2[0] << std::endl;
		std::cout << "arr2[1] = " << arr2[1] << std::endl;
		arr2[2] = '5';
		std::cout << "arr2[2] = " << arr2[2] << std::endl;
		
	}
	catch(const std::exception &e)
	{
		std::cout << "exception : " <<e.what() << std::endl; 
	}
	return (0);
}