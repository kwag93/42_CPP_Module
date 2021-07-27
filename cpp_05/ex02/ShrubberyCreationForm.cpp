#include "ShrubberyCreationForm.hpp"

std::string trees[3] =
	{
		"      /\\\n"
		"     /\\*\\\n"
		"    /\\O\\*\\\n"
		"   /*/\\/\\/\\\n"
		"  /\\O\\/\\*\\/\\\n"
		" /\\*\\/\\*\\/\\/\\\n"
		"/\\O\\/\\/*/\\/O/\\\n"
		"      ||\n"
		"      ||\n"
		"      ||\n",
		"         v\n"
		"        >X<\n"
		"         A\n"
		"        d$b\n"
		"      .d\\$$b.\n"
		"    .d$i$$\\$$b.\n"
		"       d$$@b\n"
		"      d\\$$$ib\n"
		"    .d$$$\\$$$b\n"
		"  .d$$@$$$$\\$$ib.\n"
		"      d$$i$$b\n"
		"     d\\$$$$@$b\n"
		"  .d$@$$\\$$$$$@b.\n"
		".d$$$$i$$$\\$$$$$$b.\n"
		"        ###\n"
		"        ###\n"
		"        ###\n",
		"         *\n"
		"        /|\\\n"
		"       /*|O\\\n"
		"      /*/|\\*\\\n"
		"     /X/O|*\\X\\\n"
		"    /*/X/|\\X\\*\\\n"
		"   /O/*/X|*\\O\\X\\\n"
		"  /*/O/X/|\\X\\O\\*\\\n"
		" /X/O/*/X|O\\X\\*\\O\\\n"
		"/O/X/*/O/|\\X\\*\\O\\X\\\n"
		"        |X|\n"
		"        |X|\n"};

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Form", 145, 137), target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Form", 145, 137), target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form("Shrubbery Form", 145, 137), target(other.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubbery)
{
	this->target = shrubbery.target;
	return (*this);
}

const char *ShrubberyCreationForm::TargetFileOpenException::what() const throw()
{
	return "ShrubberyCreationFormException: Cannot open file";
}

const char *ShrubberyCreationForm::WriteException::what() const throw()
{
	return "ShrubberyCreationFormException: Error while writing to the file";
}

bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw Form::NotSignedException();
	if (this->getExecuteGrade() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	std::string const shrubName = (this->target + "_shrubbery");	 // file name
	std::ofstream outfile(shrubName, std::ios::out | std::ios::app); //출력

	if (!outfile.is_open() || outfile.bad())
		throw TargetFileOpenException();
	int treeCount = (rand() % 2) + 1;
	for (int i = 0; i < treeCount; i++)
	{
		outfile << trees[rand() % 3];
		if (outfile.bad())
		{
			outfile << std::endl;
			outfile.close();
			throw WriteException();
		}
	}
	outfile << std::endl;
	outfile.close();
	return true;
}
