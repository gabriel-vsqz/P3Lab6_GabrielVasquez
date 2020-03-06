#pragma once

#include "Numero.hpp"
#include <string>

using namespace std;

class Decimal : public Numero {
    public:
        Decimal(string);
        string toString();
        Numero operator+(Numero);
        Numero operator-(Numero);
        Numero operator*(Numero);
};