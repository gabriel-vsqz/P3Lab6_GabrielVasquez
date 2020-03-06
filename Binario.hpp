#pragma once

#include "Numero.hpp"
#include <string>

using namespace std;

class Binario : public Numero {
    protected:
        Binario(string);
    public:
        string toString();
};