#include <iostream>
#include <string>
#include<vector>
#include<fstream>

#include "Event.h"
#include "LiveMusicClass.h"
#include "StandUpComedyClass.h"
#include "FilmClass.h"

int main(int argc, char** argv)
{
	std::vector<LiveMusicClass> list01;
	std::vector<StandUpComedyClass> list02;
	std::vector<FilmClass> list03;
	int input;
	bool check = true;
	
	try
	{
		while(check)
		{
			std::cout << "1) Add Event" << std::endl;
			std::cout << "2) List All Events" << std::endl;
			std::cout << "3) List Details and Availability" << std::endl;
			std::cout << "4) Add Booking" << std::endl;
			std::cout << "5) Cancel booking" << std::endl;
			std::cout << "6) Load from File" << std::endl;
			std::cout << "7) Save to File" << std::endl;
			
			std::cout << std:: endl;
			
			std::cout << "Select an option: ";
			std::cin >> input;
			
			if (!std::cin){throw(input); }
			
			switch(input)
			{
				case 1:
				{	
					std::cout << "1) Add Live Music." << std::endl;
					std::cout << "2) Add Stand Up Comedy." << std::endl;
					std::cout << "3) Add Film." << std::endl;
					
					std::cout << "Select Event Type: ";
					std::cin >> input;
					
					std::string name;
					std::cout << "Enter the name of event: ";
					getline(std::cin, name);
					getline(std::cin, name);
					
					switch(input)
					{
						case 1:
						{	// adding live music	
							LiveMusicClass live_music_obj(name);
							list01.vector::push_back(live_music_obj);
							std::cout << "Event ( " << name << " ) has been added." << std::endl;
							break;
						}
				
						case 2:
						{
							// adding stand up comedy
							StandUpComedyClass stand_up_comedy_obj(name);
							list02.vector::push_back(stand_up_comedy_obj);
							std::cout << "Event ( " << name << " ) has been added." << std::endl;
							break;
						}
				
						case 3:
						{
							// adding film
				         	FilmClass film_obj(name);
							list03.vector::push_back(film_obj);
							std::cout << "Event ( " << name << " ) has been added." << std::endl;
							break;
						}	
						default:
						{
							std::cout << "Wrong Input." << std::endl;
						}
					}
					break;
				}
				case 2:
				{
					// displying live music
					if(list01.size() != 0)
						std::cout<< "Live Music Events List:" << std::endl;
						for(int i = 0; i < list01.size() ; i++)
					    {
					        std::cout<< (i+1) << ") " << list01[i].getName() << std::endl;
					    }
					    std::cout<<std::endl;
					    
					// displaying stand up comedy
					if(list02.size() != 0)
						std::cout<< "Stand Up Comedy Events List:" << std::endl;
						for(int i = 0; i < list02.size() ; i++)
					    {
					        std::cout<< (i+1) << ") " << list02[i].getName() << std::endl;
					    }
					    std::cout<<std::endl;
					    
					// displaying film
					if(list03.size() != 0)
						std::cout<< "Film Events List:" << std::endl;
						for(int i = 0; i < list03.size() ; i++)
					    {
					        std::cout<< (i+1) << ") " << list03[i].getName() << std::endl;
					    }
					    std::cout<<std::endl;
					break;
				}
				case 3:
				{
					// displaying live music details
					if(list01.size() != 0)
						std::cout<< "Live Music Events Details:" << std::endl;
						for(int i = 0; i < list01.size() ; i++)
					    {
					        std::cout<< (i+1) << ") ";
					        list01[i].printAllDetails();
							std::cout << std::endl;
					    }
					    std::cout<<std::endl;
					    
					// displaying stand up comedy details
					if(list02.size() != 0)
						std::cout<< "Stand Up Comedy Events Details:" << std::endl;
						for(int i = 0; i < list02.size() ; i++)
					    {
					        std::cout<< (i+1) << ") ";
					        list02[i].printAllDetails();
							std::cout << std::endl;
					    }
					    std::cout<<std::endl;
					    
					// displaying film details
					if(list03.size() != 0)
						std::cout<< "Film Events Details:" << std::endl;
						for(int i = 0; i < list03.size() ; i++)
					    {
					        std::cout<< (i+1) << ") ";
					        list03[i].printAllDetails();
							std::cout << std::endl;
					    }
					    std::cout<<std::endl;
					break;
				}
				case 4:
				{
					std::cout << "1) Live Music." << std::endl;
					std::cout << "2) Stand Up Comedy." << std::endl;
					std::cout << "3) Film." << std::endl;
					
					std::cout << "Select Event Type: ";
					std::cin >> input;
					
					switch(input)
					{
						case 1:
						{
							// booking ticket for live music
							if(list01.size() != 0)
							{
							// Displaying Live Music Details
								for(int i = 0; i < list01.size() ; i++)
							    {
							        std::cout<< (i+1) << ") ";
							        list01[i].printAllDetails();
									std::cout << std::endl;
							    }
							    std::cout<<std::endl;
								std::cout << "Select an option: ";
								std::cin >> input;
								list01[input-1].bookTicket();
							}
							break;
						}
						
						case 2:
						{
							// booking ticket for stand up comedy
							if(list02.size() != 0)
							{
							// Displaying Live Music Details
								for(int i = 0; i < list02.size() ; i++)
							    {
							        std::cout<< (i+1) << ") ";
							        list02[i].printAllDetails();
									std::cout << std::endl;
							    }
							    std::cout<<std::endl;
								std::cout << "Select an option: ";
								std::cin >> input;
								list02[input-1].bookTicket();
							}
							break;
						}
						
						case 3:
						{
							// booking ticket for film
							if(list03.size() != 0)
							{
							// Displaying Live Music Details
								for(int i = 0; i < list03.size() ; i++)
							    {
							        std::cout<< (i+1) << ") ";
							        list03[i].printAllDetails();
									std::cout << std::endl;
							    }
							    std::cout<<std::endl;
								std::cout << "Select an option: ";
								std::cin >> input;
								list03[input-1].bookTicket();
							}
							break;
						}
						
						default:
						{
							std::cout << "Wrong Input." << std::endl;
						}
					}
					break;
				}
				case 5:
				{
					std::cout << "1) Live Music." << std::endl;
					std::cout << "2) Stand Up Comedy." << std::endl;
					std::cout << "3) Film." << std::endl;
					
					std::cout << "Select Event Type: ";
					std::cin >> input;
					
					switch(input)
					{
						case 1:
						{
							// cancelling ticket for live music
							if(list01.size() != 0)
							{
							// Displaying Live Music Details
								for(int i = 0; i < list01.size() ; i++)
							    {
							        std::cout<< (i+1) << ") ";
							        list01[i].printAllDetails();
									std::cout << std::endl;
							    }
							    std::cout<<std::endl;
								std::cout << "Select an option: ";
								std::cin >> input;
								list01[input-1].cancelTicket();
							}
							break;
						}
						
						case 2:
						{
							// cancelling ticket for stand up comedy
							if(list02.size() != 0)
							{
							// Displaying Live Music Details
								for(int i = 0; i < list02.size() ; i++)
							    {
							        std::cout<< (i+1) << ") ";
							        list02[i].printAllDetails();
									std::cout << std::endl;
							    }
							    std::cout<<std::endl;
								std::cout << "Select an option: ";
								std::cin >> input;
								list02[input-1].cancelTicket();
							}
							break;
						}
						
						case 3:
						{
							// cancelling ticket for film
							if(list03.size() != 0)
							{
							// Displaying Live Music Details
								for(int i = 0; i < list03.size() ; i++)
							    {
							        std::cout<< (i+1) << ") ";
							        list03[i].printAllDetails();
									std::cout << std::endl;
							    }
							    std::cout<<std::endl;
								std::cout << "Select an option: ";
								std::cin >> input;
								list03[input-1].cancelTicket();
							}
							break;
						}
						
						default:
						{
							std::cout << "Wrong Input." << std::endl;
						}
					}
					break;
				}
				case 6:
				{
					// loading data form file
					std::string myText;
					std::ifstream MyReadFile("data.txt");
					while (getline (MyReadFile, myText))
					{
						std::   cout << myText << std::endl;
					}
					MyReadFile.close();
					break;
				}
				case 7:
				{
					// saving data to file
					std::ofstream outdata;
				    int i;
				
					outdata.open("data.txt");
					if( !outdata )
					{
				      std::cerr << "Error: file could not be opened" << std::endl;
				      exit(1);
				    }
					
					outdata << "Live music events: " << std::endl;
					for (i=0; i<list01.size(); ++i)
				      outdata << list01[i].getName() << std::endl;
				      
				    outdata << "Stand up comedy events: " << std::endl;
					for (i=0; i<list02.size(); ++i)
				      outdata << list02[i].getName() << std::endl;
				      
				    outdata << "Film events: " << std::endl;
					for (i=0; i<list03.size(); ++i)
				      outdata << list03[i].getName() << std::endl;
				    outdata.close();
					   
				    std::cout << "Data saved to file." << std::endl;
					
					break;
				}
				default:
				{
					std::cout << "Wrong Input." << std::endl;
				}
			}
			
			std::cout << "Press 0 to continue and anyother to exit: ";
			std::cin >> input;
			if(input != 0)
				check = false;
		}
	}
	catch(int opt)
	{
		std::cout << "Exception Occured."; 
	}
}
