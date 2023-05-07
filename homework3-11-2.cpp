#include <iostream>
#include <string>
#include "LeaverDynamicLib.h"


int main()
{
    setlocale(LC_ALL, "Russian");

    std::string str;
    std::cout << "Write name: ";
    std::cin >> str;
    LeaverDynamicLib::leaver message(str);
    message.leave();
    return 0;
}