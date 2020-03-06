#pragma once

#include "Numero.hpp"
#include <string>

using namespace std;

class Binario : public Numero {
    public:
        Binario(string);
        string toString();
        Numero operator+(Numero);
        Numero operator-(Numero);
        Numero operator*(Numero);
};