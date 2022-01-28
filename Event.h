#ifndef EVENT_H
#define EVENT_H

#include <string>

// Event class
class Event
{
	public:
		// variables, constructor, procedures
		std::string name, type;
		
		Event(std::string n, std::string t);
		
		std::string getName();
		std::string getType();
		
		void printDetails();
	protected:
};

#endif
