#include "LiveMusicClass.h"

#include<iostream>
#include<string>

LiveMusicClass::LiveMusicClass(std::string n): Event(n, "Live Music")
{
	space = 300;
}

void LiveMusicClass::bookTicket()
{
	if(space == 0)
		std::cout << "House Full." << std::endl;
	else
	{
		std::cout << "Ticket has been Booked." << std::endl;
		space = space -1;;
	}
}

void LiveMusicClass::cancelTicket()
{
	if(space == 300)
		std::cout << "No ticket is sold for this event." << std::endl;
	else
	{
		std::cout << "Ticket has been Canclled." << std::endl;
		space++;
	}
}

void LiveMusicClass::printAllDetails()
{
	Event::printDetails();
	std::cout << space << " tickets are available." << std::endl;
}
