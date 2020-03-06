#pragma once

#include "Numero.hpp"
#include <string>

using namespace std;

class Decimal : public Numero {
    protected:
        Decimal(string);
    public:
        string toString();
        Numero operator+(Numero);
        Numero operator-(Numero);
        Numero operator*(Numero);
};