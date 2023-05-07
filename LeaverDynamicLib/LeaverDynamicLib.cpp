#include "LeaverDynamicLib.h"
#include <iostream>


Leaver::Leaver() {}
Leaver::Leaver(std::string str)
{
	this->_str = str;
}
void Leaver::leave(std::string _str)
{
	std::cout << "Good bay, " << _str << "!";
}
