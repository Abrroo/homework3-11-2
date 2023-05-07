#pragma once

#ifdef LEAVERDYNAMICLIB_EXPORTS
#define LEAVERDYNAMICLIB_API __declspec(dllexport)
#else
#define LEAVERDYNAMICLIB_API __declspec(dllimport)
#endif


#include<iostream>
#include <string>

class leaver
{
public:
    std::string str;
    leaver(std::string str_);
    void LEAVERDYNAMICLIB_API leave();
};