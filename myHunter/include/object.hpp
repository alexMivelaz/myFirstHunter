/*
** myFirstHunter, 2021: MIVELAZ
** object.hpp
** File description:
** the object class
*/

#pragma once

#include <string>

namespace object {

    class object
    {
        public:
            object(const std::string &name = "object", const int id = 0);
            virtual ~object();

        protected:
            std::string _name;
            int _id;

        private:

    };

}