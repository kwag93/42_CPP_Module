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
		Animal *copy = new Cat(*(Cat *)Animals[5]); // 복사함
		for (int i = 0; i < 100; ++i)
		{																		   // 왼쪽이 카피
			std::cout << ((Cat *)Animals[5])->getBrain()->getIdea(i) << std::endl; // 오른쪽이 원본
		}
		std::cout << "-----------------------------\n"
				  << std::endl;

		for (int i = 0; i < 10; ++i)
		{
			delete Animals[i];
		}
		// deep copy가 되는지를 확인하기 위해서 delete를 한번 진행함.
		for (int i = 0; i < 100; ++i)
		{ // 왼쪽이 카피
			std::cout << ((Cat *)copy)->getBrain()->getIdea(i) << std::endl;
		}
		system("leaks Brain");
	}
}
