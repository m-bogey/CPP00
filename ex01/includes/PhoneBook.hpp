#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {

public:
	void	add(int j);
	void	search(void);

    Contact contacts[8];
	int		index;
};

#endif