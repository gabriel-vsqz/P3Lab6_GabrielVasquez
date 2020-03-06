#include "Numero.hpp"
#include "Octal.hpp"
#include <string>

using namespace std;

Octal :: Octal(string num) : Numero(num) {
}

string Octal :: toString() {
    return Numero::numero;
}

Numero Octal :: operator+(Numero n) {
    
}

Numero Octal :: operator-(Numero n) {

}

Numero Octal :: operator*(Numero n) {

}