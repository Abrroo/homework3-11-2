#include <iostream>
#include "LeaverDynamicLib.h"

Leaver::Leaver() {}
Leaver::Leaver(std::string str_)
{
    this->str = str_;
}

void Leaver::leave(std::string str)
{
    std::cout << "До свидания, " << str << "!";
}