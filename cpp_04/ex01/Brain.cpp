#include "Brain.hpp"

Brain::Brain()
{
	const std::string ideas[] = {
		"🥱",
		"🥵",
		"😢",
		"😱",
		"🥶",
		"🤯",
		"🤩",
		"🥰",
		"🥳",
		"🥴",
		"🤤",
		"🤢",
		"🤧",
		"🤮",
		"🤡",
		"🤠",
		"🤥",
		"🤤",
	};
	std::cout << "Constructor Brain"<<std::endl;
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = ideas[rand() % (sizeof(ideas) / sizeof(std::string))];
	}
}
Brain::~Brain()
{
	std::cout << "Destructor Brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy Brain" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = copy.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Copy Brain" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = copy.ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int idx)
{
	return (this->ideas[idx]);
}
