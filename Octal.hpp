#pragma once

#include "Numero.hpp"
#include <string>

using namespace std;

class Octal : public Numero {
    public:
        Octal(string);
        string toString();
        Numero operator+(Numero);
        Numero operator-(Numero);
        Numero operator*(Numero);
};