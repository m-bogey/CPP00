# include <iostream>
# include <string>  //std//string

# include "PhoneBook.hpp"

int	main()
{
	PhoneBook 	instance;
	std::string str("");
	int			j;

	j = 0;
	instance.index = 0;
	while (str.compare("EXIT"))
	{
		std::cin >> str;
		if (str.compare("ADD") == 0)
		{
			instance.add(j);
			j++;
			if (j == 8)
				j = 0;
		}
		if (str.compare("SEARCH") == 0)
		{
			instance.search();
	/*		i = -1;
			while (++i < instance.i)
			{
				std::cout << std::setw(10);
				std::cout << i;
				std::cout << "|";
				std::cout << std::setw(10);
				std::cout << instance.contacts[i].first_name;
				std::cout << "|";
				std::cout << std::setw(10);
				std::cout << instance.contacts[i].last_name;
				std::cout << "|";
				std::cout << std::setw(10);
				std::cout << instance.contacts[i].nickname;
				std::cout << "|";
				std::cout << std::endl;
			}*/
		}
	}
	return (0);
}