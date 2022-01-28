#ifndef FILMCLASS_H
#define FILMCLASS_H

#include <string>

#include "Event.h"

// Film class
class FilmClass: public Event
{
	public:
		// variables, constructor, proceduress
		int space;
		FilmClass(std::string n);
		
		void printAllDetails();
		
		void bookTicket();
		void cancelTicket();
	protected:
};

#endif
