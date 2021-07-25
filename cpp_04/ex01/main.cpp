#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		Animal *Animals[10];
		for (int i = 0; i < 10; ++i)
		{
			if (i % 2 == 0)
				Animals[i] = new Dog();
			else
				Animals[i] = new Cat();
		}
		std::cout << "-----------------------------" << std::endl;
		Animal *copy = new Cat(*(Cat *)Animals[5]);
		for (int i = 0; i < 100; ++i)
		{		   // 왼쪽이 카피
			std::cout << ((Cat *)Animals[5])->getBrain()->getIdea(i) << std::endl; // 오른쪽이 원본
		}
		std::cout << "-----------------------------\n"
				  << std::endl;
		
		for (int i = 0; i < 10; ++i)
		{
			delete Animals[i];
		}
		for (int i = 0; i < 100; ++i)
		{		   // 왼쪽이 카피
			std::cout << ((Cat *)copy)->getBrain()->getIdea(i) << std::endl;
		}
		system("leaks Brain");
	}
}
