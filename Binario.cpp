#include "Numero.hpp"
#include "Binario.hpp"
#include <string>

using namespace std;

Binario :: Binario(string num) : Numero(num) {
}

string Binario :: toString() {
    return Numero::numero;
}

Numero Binario :: operator+(Numero n) {
    
}

Numero Binario :: operator-(Numero n) {

}

Numero Binario :: operator*(Numero n) {

}