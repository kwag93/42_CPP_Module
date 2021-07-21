#include "Karen.hpp"
#include <string>

level levelType(std::string const &type)
{
	if (type == "DEBUG")
		return debug;
	if (type == "INFO")
		return info;
	if (type == "WARNING")
		return warning;
	if (type == "ERROR")
		return error;
	return notImportant;
}

int main(int argc, char *argv[])
{
	Karen karen;
	if (argc != 2)
	{
		std::cout << "Not enough" << std::endl;
		return 1;
	}
	else
	{
		switch (levelType(argv[1]))
		{
		case debug:
			karen.complain("DEBUG");
		case info:
			karen.complain("INFO");
		case warning:
			karen.complain("WARNING");
		case error:
			karen.complain("ERROR");
			break;
		default:
			std::cout << "Probably complaining about insignificant problems" << std::endl;
			break;
		}
	}
	return (0);
}
