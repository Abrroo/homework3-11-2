#pragma once
#include <string>

#ifdef LEAVERDYNAMICLIB_EXPORTS
#define LEAVERDYNAMICLIB_API __declspec(dllexport)
#else
#define LEAVERDYNAMICLIB_API __declspec(dllimport)
#endif

class Leaver
{
public:
	std::string _str;
	LEAVERDYNAMICLIB_API Leaver();
	LEAVERDYNAMICLIB_API Leaver(std::string str);
	LEAVERDYNAMICLIB_API void  leave(std::string str);
};
