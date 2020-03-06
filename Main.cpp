#include "Numero.hpp"
#include "Binario.hpp"
#include "Hexadecimal.hpp"
#include "Octal.hpp"
#include <iostream>
#include <string>
#include <vector>

vector<string> numeros;
string type1, type2;

using namespace std;

void printNumbers() {
    cout << "\nLista de Números:\n";
    for (int i = 0; i < numeros.size(); i++) {
        cout << "   Número #" << i << ": " << numeros[i] << endl;
    } 
}

void verifyType(string n, int x) {
    switch (x) {
        case 1: {
            if (n[n.size() - 1] == 'b') {
                type1 = "Binario";
            } else if (n[0] == '0' && n[1] == 'c') {
                type1 = "Octal";
            } else if (n[0] == '0' && n[1] == 'x') {
                type1 = "Hexadecimal";
            } else {
                type1 = "Decimal";
            }
        } break;

        case 2: {
            if (n[n.size() - 1] == 'b') {
                type2 = "Binario";
            } else if (n[0] == '0' && n[1] == 'c') {
                type2 = "Octal";
            } else if (n[0] == '0' && n[1] == 'x') {
                type2 = "Hexadecimal";
            } else {
                type2 = "Decimal";
            }
        } break;
    }
}

int main() {
    bool pass = true;
    while (pass) {
        int opcion;
        cout << "\n---------- Calculadora ----------\n1. Ingresar Número\n2. Listar Números\n3. Operación\n4. Salir\n: ";
        cin >> opcion;

        switch(opcion) {
            case 1: {
                string numero;
                cout << "Ingrese un número: ";
                cin >> numero;
                numeros.push_back(numero);
            } break;

            case 2: {
                printNumbers(); 
            } break;

            case 3: {
                printNumbers();
                int pnum1, pnum2;
                cout << "Elija Número 1: ";
                cin >> pnum1;
                cout << "Elija Número 2: ";
                cin >> pnum2;
                verifyType(numeros.at(pnum1), 1);
                cout << "1: " << type1 << endl;
                verifyType(numeros.at(pnum2), 2);
                cout << "2: " << type2 << endl;
            } break;

            case 4: {
                pass = false;
                cout << endl;
            } break;

            default:
                cout << "Debe ingresar una de las opciones presentadas.\n";
        }
    }
}