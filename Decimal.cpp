#include "Numero.hpp"
#include "Decimal.hpp"
#include <string>

using namespace std;

Decimal :: Decimal(string num) : Numero(num) {
}

string Decimal :: toString() {
    return Numero::numero;
}

Numero Decimal :: operator+(Numero n) {

}

Numero Decimal :: operator-(Numero n) {

}

Numero Decimal :: operator*(Numero n) {

}