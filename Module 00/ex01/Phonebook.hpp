
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include "Contact.hpp"


class Phonebook
{
	public:
		Phonebook();
		~Phonebook();

		void add();
		void search();
		void print();

	private:
		Contact contacts[8];	
		int	entry;
};

#endif
