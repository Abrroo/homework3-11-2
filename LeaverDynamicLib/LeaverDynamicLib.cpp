#include <iostream>
#include "LeaverDynamicLib.h"

namespace LeaverDynamicLib
{
    leaver::leaver(std::string str_)
    {
        this->str = str_;
    }

    void leaver::leave()
    {
        std::cout << "До свидания, " << str << "!!!";
    }
}