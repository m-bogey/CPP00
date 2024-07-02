# include <iostream>
# include <string>  //std::string

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
		}
	}
	return (0);
}