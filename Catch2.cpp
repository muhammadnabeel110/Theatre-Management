#include "Catch2.h"
#include<iostream>
void Catch2::test()
{
	// Main menu
	std::cout << "1) Add Event" << std::endl;
	std::cout << "2) List All Events" << std::endl;
	std::cout << "3) List Details and Availability" << std::endl;
	std::cout << "4) Add Booking" << std::endl;
	std::cout << "5) Cancel booking" << std::endl;
	std::cout << "6) Load from File" << std::endl;
	std::cout << "7) Save to File" << std::endl;
	
	// event menu
	std::cout << "1) Add Live Music." << std::endl;
	std::cout << "2) Add Stand Up Comedy." << std::endl;
	std::cout << "3) Add Film." << std::endl;
	// taking event info to be added
	std::string name = "Live Music";
	std::cout << "Name of event: " << name << std::endl;
	// adding event
	LiveMusicClass live_music_obj(name);
	list01.vector::push_back(live_music_obj);
	std::cout << "Event ( " << name << " ) has been added." << std::endl;
	// displaying event list
	std::cout<< "Live Music Events List:" << std::endl;
	for(int i = 0; i < list01.size() ; i++)
	{
		std::cout<< (i+1) << ") " << list01[i].getName() << std::endl;
	}
	std::cout<<std::endl;
	// displaying event details
	std::cout<< "Live Music Events Details:" << std::endl;
	for(int i = 0; i < list01.size() ; i++)
	{
		std::cout<< (i+1) << ") ";
		list01[i].printAllDetails();
		std::cout << std::endl;
	}
	std::cout<<std::endl;
	// displaying event menu
	std::cout << "1) Live Music." << std::endl;
	std::cout << "2) Stand Up Comedy." << std::endl;
	std::cout << "3) Film." << std::endl;
	// printing details
	for(int i = 0; i < list01.size() ; i++)
	{
	std::cout<< (i+1) << ") ";
	list01[i].printAllDetails();
	std::cout << std::endl;
	}
	std::cout<<std::endl;
	// booking ticket
	list01[0].bookTicket();
	// displaying event list
	std::cout << "1) Live Music." << std::endl;
	std::cout << "2) Stand Up Comedy." << std::endl;
	std::cout << "3) Film." << std::endl;
	// displaying details
	for(int i = 0; i < list01.size() ; i++)
	{
		std::cout<< (i+1) << ") ";
		list01[i].printAllDetails();
		std::cout << std::endl;
	}
	std::cout<<std::endl;
	// cancelling ticket
	list01[0].cancelTicket();
	
}
