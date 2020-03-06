#pragma once

#include "Numero.hpp"
#include <string>

using namespace std;

class Hexadecimal : public Numero {
    public:
        Hexadecimal(string);
        string toString();
        Numero operator+(Numero);
        Numero operator-(Numero);
        Numero operator*(Numero);
};