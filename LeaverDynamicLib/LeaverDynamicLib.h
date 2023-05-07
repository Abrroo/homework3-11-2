#pragma once

#ifndef LEAVERDYNAMICLIB_EXPORTS
#define LEAVERDYNAMICLIBRARY_API __declspec(dllexport)
#else
#define LEAVERDYNAMICLIBRARY_API __declspec(dllimport)
#endif


#include<iostream>
#include <string>

class leaver
{
public:
    std::string str;
    leaver(std::string str_);
    LEAVERDYNAMICLIBRARY_API void leave();
};