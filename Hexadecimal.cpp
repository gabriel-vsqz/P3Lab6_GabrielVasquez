#include "Numero.hpp"
#include "Hexadecimal.hpp"
#include <string>

using namespace std;

Hexadecimal :: Hexadecimal(string num) : Numero(num) {
}

string Hexadecimal :: toString() {
    return Numero::numero;
}

Numero Hexadecimal ::operator+(Numero n) {

}

Numero Hexadecimal :: operator-(Numero n) {

}

Numero Hexadecimal :: operator*(Numero n) {
    
}