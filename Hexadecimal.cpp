#include "Numero.hpp"
#include "Hexadecimal.hpp"
#include <string>

using namespace std;

Hexadecimal :: Hexadecimal(string num) : Numero(num) {
}

string Hexadecimal :: toString() {
    return Numero::numero;
}

int Hexadecimal :: operator+(Numero n) {
    
}

int Hexadecimal :: operator-(Numero n) {

}

int Hexadecimal :: operator*(Numero n) {
    
}