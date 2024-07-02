#include <iostream>
# include <iomanip> //setw
#include <string>
#include <sstream>
#include <cstdlib> //atoi
#include "PhoneBook.hpp"

void	PhoneBook::add(int j)
{
    std::cout << "First Name :" << std::endl;
	std::cin >> contacts[j].first_name;
	std::cout << "Last Name :" << std::endl;
	std::cin >> contacts[j].last_name;
	std::cout << "Nickname :" << std::endl;
	std::cin >> contacts[j].nickname;
	std::cout << "Phone Number :" << std::endl;
	std::cin >> contacts[j].phone_number;
	std::cout << "Darkest Secret :" << std::endl;
	std::cin >> contacts[j].darkest_secret;
	if (index < 8)
		index++;
}

void    PhoneBook::search(void)
{
    std::string			nb_index_contact;
    int					i;
    std::string         str_index;
    std::ostringstream	oss;
    std::string			tmp;

    oss << index - 1;
    str_index = oss.str();
    i = -1;
	while (++i < index)
	{
		std::cout << std::setw(10);
		std::cout << i;
		std::cout << "|";
		std::cout << std::setw(10);
		if (contacts[i].first_name.length() > 10)
		{
			tmp =  contacts[i].first_name.substr(0, 9) + ".";
			std::cout << tmp;
		}
		else
			std::cout << contacts[i].first_name;
		std::cout << "|";
		std::cout << std::setw(10);
		if (contacts[i].last_name.length() > 10)
		{
			tmp = contacts[i].last_name.substr(0, 9) + ".";
			std::cout << tmp;
		}
		else
			std::cout << contacts[i].last_name;
		std::cout << "|";
		std::cout << std::setw(10);
		if (contacts[i].nickname.length() > 10)
		{
			tmp = contacts[i].nickname.substr(0, 9) + ".";
			std::cout << tmp;
		}
		else
			std::cout << contacts[i].nickname;
		std::cout << "|";
		std::cout << std::endl;
	}
	if (index > 0)
	{
    	std::cout << "Number Index contact :" << std::endl;
    	std::cin >> nb_index_contact;
    	while (nb_index_contact < "0" || nb_index_contact > str_index)
    	{
        	std::cout << "Retry with digit 0 to "<< str_index << std::endl;
        	std::cin >> nb_index_contact;
    	}
    int n = nb_index_contact[0] - '0';
    	std::cout << contacts[n].first_name << std::endl;
    	std::cout << contacts[n].last_name << std::endl;
    	std::cout << contacts[n].nickname << std::endl;
    	std::cout << contacts[n].phone_number << std::endl;
    	std::cout << contacts[n].darkest_secret << std::endl;
	}
	else
		std::cout << "empty phonebook" << std::endl;
}