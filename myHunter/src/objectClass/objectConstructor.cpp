/*
** myFirstHunter, 2021: MIVELAZ
** objectConstructor.cpp
** File description:
** all the object constructor and the object destructor
*/

#include <iostream>
#include "object.hpp"

namespace object {

    object::object()
    {
        std::cout << "an object is construct" << std::endl;
    }

    object::~object()
    {
        std::cout << "an object is destroy" << std::endl;
    }

}