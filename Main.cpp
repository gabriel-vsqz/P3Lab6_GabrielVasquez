#include "Numero.hpp"
#include "Binario.hpp"
#include "Hexadecimal.hpp"
#include "Octal.hpp"
#include "Decimal.hpp"
#include <iostream>
#include <string>
#include <vector>

vector<string> numeros;
vector<Numero> numeros2;
string type1, type2;

using namespace std;

void printNumbers() {
    cout << "\nLista de Números:\n";
    for (int i = 0; i < numeros.size(); i++) {
        cout << "   Número #" << i << ": " << numeros[i] << endl;
    } 
}

bool checkBinary(string n) {
    int cont = 0;
    for (int i = 0; i < n.size() - 1; i++) {
        if (n[i] == '1' || n[i] == '0') {
            cont++;
        }
    }
    if (n[n.size() - 1] == 'b' && cont == n.size() - 1) {
        return true;
    } else {
        return false;
    }
}

bool checkOctal(string n) {
    int cont = 0;
    for (int i = 2; i < n.size(); i++) {
        if (n[i] == '0' || n[i] == '1' || n[i] == '2' || n[i] == '3' || n[i] == '4' || n[i] == '5' || n[i] == '6' || n[i] == '7') {
            cont++;
        }
    }
    if (n[0] == '0' && n[1] == 'c' && cont == n.size() - 2) {
        return true;
    } else {
        return false;
    }
}

bool checkHexadecimal(string n) {
    int cont = 0;
    for (int i = 2; i < n.size(); i++) {
        if (n[i] == '0' || n[i] == '1' || n[i] == '2' || n[i] == '3' || n[i] == '4' || n[i] == '5' || n[i] == '6' || n[i] == '7' || n[i] == '8' ||
            n[i] == '9' || n[i] == 'A' || n[i] == 'B' || n[i] == 'C' || n[i] == 'D' || n[i] == 'E' || n[i] == 'F') {
            cont++;
        }
    }
    if (n[0] == '0' && n[1] == 'x' && cont == n.size() - 2) {
        return true;
    } else {
        return false;
    }
}

bool checkDecimal(string n) {
    int cont = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '0' || n[i] == '1' || n[i] == '2' || n[i] == '3' || n[i] == '4' || n[i] == '5' || n[i] == '6' || n[i] == '7' || n[i] == '8' ||
            n[i] == '9') {
            cont++;
        }
    }
    if (cont == n.size()) {
        return true;
    } else {
        return false;
    }
}

void verifyType(string n, int x) {
    switch (x) {
        case 1: {
            if (checkBinary(n)) {
                type1 = "Binario";
            } else if (checkOctal(n)) {
                type1 = "Octal";
            } else if (checkHexadecimal(n)) {
                type1 = "Hexadecimal";
            } else if (checkDecimal(n)) {
                type1 = "Decimal";
            }
        } break;

        case 2: {
            if (checkBinary(n)) {
                type2 = "Binario";
            } else if (checkOctal(n)) {
                type2 = "Octal";
            } else if (checkHexadecimal(n)) {
                type2 = "Hexadecimal";
            } else if (checkDecimal(n)) {
                type2 = "Decimal";
            }
        } break;
    }
}

void crearNumeros(string n1, string n2) {
    if (checkBinary(n1)) {
        Binario b(n1);
        numeros2[0] = b;
    } else if (checkOctal(n1)) {
        Octal o(n1);
        numeros2[0] = o;
    } else if (checkHexadecimal(n1)) {
        Hexadecimal h(n1);
        numeros2[0] = h;
    } else if (checkDecimal(n1)) {
        Decimal d(n1);
        numeros2[0] = d;
    }
    if (checkBinary(n2)) {
        Binario b2(n2);
        numeros2[1] = b2;
    } else if (checkOctal(n2)) {
        Octal o2(n2);
        numeros2[1] = o2;
    } else if (checkHexadecimal(n2)) {
        Hexadecimal h2(n2);
        numeros2[1] = h2;
    } else if (checkDecimal(n2)) {
        Decimal d2(n2);
        numeros2[1] = d2;
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
                if (checkHexadecimal(numero) || checkOctal(numero) || checkDecimal(numero) || checkBinary(numero)) {
                    numeros.push_back(numero);
                } else {
                    cout << "El número que ingresó no representa ninguna forma de las formas: Decimal, Binario, Octal, Hexadecimal" << endl;
                }
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
                verifyType(numeros.at(pnum2), 2);
                crearNumeros(numeros.at(pnum1), numeros.at(pnum2));
                int opcion2;
                do {
                    cout << "\n----- Operaciones -----\n1. Suma\n2. Resta\n3. Multiplicación\n4. Volver\n: ";
                    cin >> opcion2;
                    while (opcion2 < 1 && opcion2 > 4) {
                        cout << "Debe elegir entre una de las opciones indicadas" << endl;
                        cout << "\n----- Operaciones -----\n1. Suma\n2. Resta\n3. Multiplicación\n4. Volver\n: ";
                        cin >> opcion2;
                    }
                    switch (opcion2) {
                        case 1: {
                            
                        } break;
                        
                        case 2: {

                        } break;

                        case 3: {

                        } break;

                        case 4: {} break;
                    }
                } while(opcion2 != 4);
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