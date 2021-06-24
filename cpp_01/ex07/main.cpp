/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 09:40:44 by bkwag             #+#    #+#             */
/*   Updated: 2021/06/24 10:48:35 by bkwag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

std::string ft_replace(std::string str, std::string prev, std::string next)
{
	std::stringstream stream;
	size_t i;

	for(i = 0; i < str.length(); i++)
	{
		if(str[i] == prev[0])
		{
			size_t j;
			for(j = 0; j < prev.length(); j++)
			{
				if (str[i + j] != prev[j])
					break;
			}
			if(j == prev.length()) //prev와 동일한 경우 next로 바꿔준다.
			{
				stream << next;
				i += prev.length() - 1;
			}
			else //prev와 동일하지 않은 경우 그냥 해당 문자만 넣어준다.
				stream << str[i];
		}
		else
			stream << str[i];
	}
	return stream.str();
}

int main(int argc, char *argv[])
{
	std::fstream read_fs;
	std::fstream write_fs;


	if (argc != 4)
		return 0;
	std::string fname(argv[1]);
	std::string prev(argv[2]);
	std::string next(argv[3]);

	if(!prev.length() || !next.length())
		return 0;
	read_fs.open(argv[1], std::fstream::in);
	if(read_fs.is_open())
	{
		write_fs.open(fname + ".replace", std::fstream::out | std::ios::trunc);
		while (!read_fs.eof())
		{
			std::string str;
			getline(read_fs, str);
			write_fs << ft_replace(str, prev, next);
			write_fs << '\n';
		}
		read_fs.close();
		write_fs.close();
	}
	else
		std::cout<<"Can't read file"<<std::endl;
}
