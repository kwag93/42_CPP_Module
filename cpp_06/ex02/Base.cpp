#include "Base.hpp"

Base *generate(void)
{
	int len;
	len = rand() % 3;
	Base *result = nullptr;

	if (len == 0)
	{
		std::cout << "Create A ";
		result = new A();
	}
	else if (len == 1)
	{
		std::cout << "Create B ";
		result = new B();
	}
	else
	{
		std::cout << "Create C ";
		result = new C();
	}
	return result;
}

void identify(Base *p) // pointer는 null 포인터를 받을 수 있음
{
	if (dynamic_cast<A *>(p) != nullptr)
	{
		std::cout << "A!";
	}
	else if (dynamic_cast<B *>(p) != nullptr)
	{
		std::cout << "B!";
	}
	else if (dynamic_cast<C *>(p) != nullptr)
	{
		std::cout << "C!";
	}
	else
		std::cout << "Nothing!";
}

void identify(Base &p) // 레퍼런스는 null을 받을 수 없기 때문에 try catch
{
	try
	{
		A &temp = dynamic_cast<A &>(p);
		(void)temp;
		std::cout << "A!";
		return;
	}
	catch (std::bad_cast exp)
	{
	}

	try
	{
		B &temp = dynamic_cast<B &>(p);
		(void)temp;
		std::cout << "B!";
		return;
	}
	catch (std::bad_cast exp)
	{
	}

	try
	{
		C &temp = dynamic_cast<C &>(p);
		(void)temp;
		std::cout << "C!";
		return;
	}
	catch (std::bad_cast exp)
	{
	}
	std::cout << "Nothing!";
}
