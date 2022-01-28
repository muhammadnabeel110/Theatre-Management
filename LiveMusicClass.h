#ifndef LIVEMUSICCLASS_H
#define LIVEMUSICCLASS_H

#include <string>

#include "Event.h"

// Live music class
class LiveMusicClass: public Event
{
	public:
		// variables, constructor, procedures
		int space;
		LiveMusicClass(std::string n);
		
		void printAllDetails();
		
		void bookTicket();
		void cancelTicket();
	protected:
};

#endif
