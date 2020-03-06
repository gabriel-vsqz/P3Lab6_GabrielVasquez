#pragma once

#include "Numero.hpp"
#include <string>

using namespace std;

class Hexadecimal : public Numero {
    protected:
        Hexadecimal(string);
    public:
        string toString();
};