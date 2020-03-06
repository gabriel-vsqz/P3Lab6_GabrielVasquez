#pragma once
#include <string>

using namespace std;

class Numero {
    protected:
        string numero;
        Numero(string);
    public:
        virtual string toString();
        virtual Numero operator+(Numero);
        virtual Numero operator-(Numero);
        virtual Numero operator*(Numero);
};