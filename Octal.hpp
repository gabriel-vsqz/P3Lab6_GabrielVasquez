#pragma once

#include "Numero.hpp"
#include <string>

using namespace std;

class Octal : public Numero {
    protected:
        Octal(string);
    public:
        string toString();
        Numero operator+(Numero);
        Numero operator-(Numero);
        Numero operator*(Numero);
};