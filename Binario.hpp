#pragma once

#include "Numero.hpp"
#include <string>

using namespace std;

class Binario : public Numero {
    protected:
        Binario(string);
    public:
        string toString();
        Numero operator+(Numero);
        Numero operator-(Numero);
        Numero operator*(Numero);
};