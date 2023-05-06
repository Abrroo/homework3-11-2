#pragma once

#ifdef LEAVERDYNAMICLIBRARY_EXPORTS
#define LEAVERDYNAMICLIBRARY_API __declspec(dllexport)
#else
#define LEAVERDYNAMICLIBRARY_API __declspec(dllimport)
#endif


#include<iostream>
#include <string>

class Leaver
{
public:
    std::string str;
    Leaver();
    Leaver(std::string str_);
    LEAVERDYNAMICLIBRARY_API void leave(std::string str);
};