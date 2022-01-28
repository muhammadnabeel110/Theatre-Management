#include "FilmClass.h"

#include<iostream>
#include<string>

FilmClass::FilmClass(std::string n): Event(n, "Film")
{
	space = 200;
}

void FilmClass::bookTicket()
{
	if(space == 0)
		std::cout << "House Full." << std::endl;
	else
	{
		std::cout << "Ticket has been Booked." << std::endl;
		space = space -1;;
	}
}

void FilmClass::cancelTicket()
{
	if(space == 200)
		std::cout << "No ticket is sold for this event." << std::endl;
	else
	{
		std::cout << "Ticket has been Canclled." << std::endl;
		space++;
	}
}

void FilmClass::printAllDetails()
{
	Event::printDetails();
	std::cout << space << " tickets are available." << std::endl;
}
