#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		Animal *Animals[10];
		//Animal *animal = new Animal(); // 추상 클래스는 new 사용이 불가능하다.
		for (int i = 0; i < 10; ++i)
		{
			if (i % 2 == 0)
				Animals[i] = new Dog();
			else
				Animals[i] = new Cat();
		}

		std::cout << "-----------------------------\n"
				  << std::endl;

		for (int i = 0; i < 10; ++i)
			Animals[i]->makeSound();

		std::cout << "\n-----------------------------\n"
				  << std::endl;

		for (int i = 0; i < 10; ++i)
		{
			delete Animals[i];
		}
	}
	system("leaks abstract");
}
