 #include "Event.h"
 
 #include <iostream>
 #include <string>
 
Event::Event(std::string n, std::string t)
 {
 	name = n;
 	type =  t;
 }
 
std::string Event::getName()
{
	return name;
}

std::string Event::getType()
{
	return type;
}

void Event::printDetails()
{
	std::cout << "Event Name: " << name << std::endl;
	std::cout << "Event Type: " << type << std::endl;
}


