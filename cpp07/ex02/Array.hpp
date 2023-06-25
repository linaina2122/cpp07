#ifndef ARRAY_HPP
	#define ARRAY_HPP

#include <iostream>
template<class T>
class array{
	private:
		T* element;
		unsigned int i;
	public:
		array() : element(NULL),i(0){
			std::cout << "default constructor\n";
			this->element = new T;
		}
		array(unsigned int n) : i(n){
			std::cout << "parametrage constructor\n";
			this->element= new T[n];
		}
		array(const array &other)
		{
			std::cout << "copy constructor\n";
			unsigned int a = 0;
			while(a < this->i)
			{
				this->element[a] = other.element[a];
				a++;
			}
		}
		array& operator=(const array &other)
		{
			delete[] this->element;
			unsigned int a = 0;
			this->element  = new T[this->i];
			while(a < this->i)
			{
				element[a] = other.element[a];
				a++;
			}
			return(*this);
		}
		T& operator[](unsigned int index)
		{
			if(index < 0 || index >= i)
				throw std::exception();
			return(this->element[index]);
		}
		unsigned int size() const
		{
			return(this->i);
		}
		~array()
		{
			std::cout << "array's destructor\n";
			delete[] element;
		}
};

#endif