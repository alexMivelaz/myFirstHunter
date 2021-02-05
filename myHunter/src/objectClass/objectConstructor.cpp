/*
** myFirstHunter, 2021: MIVELAZ
** objectConstructor.cpp
** File description:
** all the object constructor and the object destructor
*/

#include <iostream>
#include "object.hpp"

namespace object {

    object::object(const std::string &name, const int id)
    {
        this->_name = name;
        this->_id = id;
        std::cout << "an object is construct" << std::endl;
        std::cout << "the name of this object is: " << this->_name << std::endl;
        std::cout << "the id of this object is: " << this->_id << std::endl;
    }

    object::~object()
    {
        std::cout << "an object is destroy" << std::endl;
    }

}