﻿#include <iostream>
#include <string>
#include "LeaverDynamicLib/LeaverDynamicLib.h"


int main()
{
    setlocale(LC_ALL, "Russian");

    std::string str;
    std::cout << "Write name: ";
    std::cin >> str;
    Leaver message;
    message.leave(str);
    return 0;
}