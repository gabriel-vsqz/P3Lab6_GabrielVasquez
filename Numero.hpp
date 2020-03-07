#pragma once
#include <string>

using namespace std;

class Numero {
    protected:
        string numero;
        Numero(string);
    public:
        Numero();
        virtual bool checkOctal(string);
        virtual bool checkHexadecimal(string);
        virtual bool checkDecimal(string);
        virtual bool checkBinary(string);
        virtual string toString();
        virtual int operator+(Numero);
        virtual int operator-(Numero);
        virtual int operator*(Numero);
};