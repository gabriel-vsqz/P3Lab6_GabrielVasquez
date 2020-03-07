#include "Numero.hpp"
#include "Binario.hpp"
#include <string>

using namespace std;

Binario :: Binario(string num) : Numero(num) {
}

string Binario :: toString() {
    return Numero::numero;
}

int Binario :: operator+(Numero& n) {
    
}

int Binario :: operator-(Numero n) {

}

int Binario :: operator*(Numero n) {

}