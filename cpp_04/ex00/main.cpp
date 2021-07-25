#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound(); //will output the cat sound!
	i->makeSound();
	meta->makeSound();

	const WrongAnimal *k = new WrongCat(); //이 경우 오버라이드가 안되고 WrongAnimal의 울음이 발생한다.
	k->makeSound();
	const WrongCat *q = new WrongCat(); //이 경우에는 WrongCat의 울음이 나온다.
	q->makeSound();
	delete meta;
	delete i;
	delete j;
	delete k;
	delete q;
	return 0;
}
