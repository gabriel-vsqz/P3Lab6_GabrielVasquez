#pragma once

#include "Numero.hpp"
#include <string>

using namespace std;

class Hexadecimal : public Numero {
    public:
        Hexadecimal(string);
        string toString();
        int operator+(Numero);
        int operator-(Numero);
        int operator*(Numero);
};