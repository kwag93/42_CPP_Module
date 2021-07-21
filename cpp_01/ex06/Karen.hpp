#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
private:
	typedef void (Karen::*f)();
	struct commentType_
	{
		std::string const name;
		f const func;
	};
	static const commentType_ commentTypeList_[];
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	Karen();
	~Karen();
	void complain(std::string level);
	void complainLevel(std::string level);
};

enum level
{
	debug,
	info,
	warning,
	error,
	notImportant
};
#endif
