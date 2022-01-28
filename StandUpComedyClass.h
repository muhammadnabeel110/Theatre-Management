#ifndef STANDUPCOMEDYCLASS_H
#define STANDUPCOMEDYCLASS_H

#include <string>

#include "Event.h"

// Stand Up Ocmedy class
class StandUpComedyClass: public Event
{
	public:
		// variables, constructor, procedures
		int space;
		bool arr[200];
		StandUpComedyClass(std::string n);
		
		void printAllDetails();
		void availableSeats();
		
		void bookTicket();
		void cancelTicket();
	protected:
};

#endif
