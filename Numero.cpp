#include "Numero.hpp"
#include <string>

using namespace std;

Numero::Numero(string num) {
    numero = num;
}

string Numero :: toString() {
    return "";
}

Numero Numero :: operator+(Numero n){
    Numero x("");
    return x + n;
}

Numero Numero :: operator-(Numero n){
    Numero x("");
    return x - n;
}

Numero Numero :: operator*(Numero n){
    Numero x("");
    return x * n;
}