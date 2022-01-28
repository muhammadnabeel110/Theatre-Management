#include "StandUpComedyClass.h"

#include<iostream>
#include<string>

StandUpComedyClass::StandUpComedyClass(std::string n): Event(n, "Stand Up Comedy")
{
	space = 200;
	
	for(int i=0; i<200; i++)
		arr[i] = 0;
}

void StandUpComedyClass::bookTicket()
{
	if(space == 0)
		std::cout << "House Full." << std::endl;
	else
	{
		availableSeats();
		
		int opt;
		std::cout << "Enter seat no: ";
		std::cin >> opt;
		if(opt < 1 || opt > 200)
			std::cout << "Out of Range." << std::endl;
		else
		{	
			if(arr[opt-1] == 1)
				std::cout << "Seat Not available." << std::endl;
			else
			{
				arr[opt-1] = 1;
				std::cout << "Ticket has been Booked." << std::endl;
				space = space -1;
			}
		}
	}
}

void StandUpComedyClass::cancelTicket()
{
	if(space == 200)
		std::cout << "No ticket is sold for this event." << std::endl;
	else
	{
		StandUpComedyClass::availableSeats();
		
		int opt;
		std::cout << "Enter Seat No.: ";
		std::cin >> opt;
		if(opt < 1 || opt > 200)
			std::cout << "Input Out Of Range. " << std::endl;
		else
		{
			if(arr[opt-1] == 0)
				std::cout << "This seat is not booked." << std::endl;
			else
			{
				arr[opt-1] = 0;
				std::cout << "Ticket has been Canclled." << std::endl;
				space++;
			}
		}
	}
}

void StandUpComedyClass::printAllDetails()
{
	Event::printDetails();
	std::cout << space << " tickets are available." << std::endl;
}

void StandUpComedyClass::availableSeats()
{
	std::cout << "Available Seats: ";
	for(int i=0; i<200; i++)
		if(arr[i] == 0)
			std::cout << (i+1) << " ";
			
	std::cout << std::endl;
}


