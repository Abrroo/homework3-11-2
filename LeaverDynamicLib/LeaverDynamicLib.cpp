#include <iostream>
#include "LeaverDynamicLib.h"

leaver::leaver(std::string str_)
{
    this->str = str_;
}

void leaver::leave()
{
    std::cout << "До свидания, " << str << "!!!";
}