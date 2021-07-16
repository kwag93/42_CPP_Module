#include "Karen.hpp"

int	main(int argc, char *argv[])
{
	Karen	karen;
	std::string complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2)
	{
		std::cout << "Not enough" << std::endl;
		return 1;
	}
	else
	{
		for (int i=0;i<4;i++)
		{
			if (argv[1] == complaints[i])
			{
				karen.complainLevel(argv[1]);
				return (0);
			}
		}
		std::cout << "Probably complaining about insignificant problems" << std::endl;
	}
	return (0);
}
